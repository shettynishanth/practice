#include <stdio.h>

void main() {
    int N, X,Size;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    printf("remove");
    scanf("%d", &X);
    for (int i = 0; i < N; i++) {
        if (A[i] != X) {
            A[newSize++] = A[i];
        }
    }
    for (int i = 0; i < newSize; i++) {
        printf("%d ", A[i]);
    }
    printf("Size: %d\n",Size);

}
