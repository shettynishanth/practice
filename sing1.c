#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning of the circular linked list
struct Node* insertFirst(struct Node* last, int data) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return last;
    }

    // Set data and next pointer for the new node
    newNode->data = data;
    newNode->next = last->next;

    // Update the last node to point to the new node
    last->next = newNode;

    return last;
}

// Function to insert a node at the end of the circular linked list
struct Node* insertLast(struct Node* last, int data) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return last;
    }

    // Set data and next pointer for the new node
    newNode->data = data;
    newNode->next = last->next;

    // Update the last node to point to the new node
    last->next = newNode;

    // Update the last pointer to the new node
    last = newNode;

    return last;
}

// Function to display the circular linked list
void display(struct Node* last) {
    if (last == NULL) {
        printf("Circular linked list is empty\n");
        return;
    }

    struct Node* current = last->next;
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != last->next);

    printf("(head)\n");
}

int main() {
    struct Node* last = NULL;
    int choice, data;

    do {
        printf("\n1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert at the beginning: ");
                scanf("%d", &data);
                if (last == NULL) {
                    last = insertFirst(last, data);
                } else {
                    last = insertFirst(last, data);
                }
                break;
            case 2:
                printf("Enter data to insert at the end: ");
                scanf("%d", &data);
                if (last == NULL) {
                    last = insertLast(last, data);
                } else {
                    last = insertLast(last, data);
                }
                break;
            case 3:
                display(last);
                break;
            case 4:
                printf("Exiting the program\n");
                break;
            default:
                printf("Invalid choice, please try again\n");
        }
    } while (choice != 4);

    // Free the memory allocated for the circular linked list
    if (last != NULL) {
        struct Node* current = last->next;
        while (current != last) {
            struct Node* nextNode = current->next;
            free(current);
            current = nextNode;
        }
        free(last);
    }

    return 0;
}
