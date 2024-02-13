DECLARE
	n1 number(5);
	n2 number(5);
	n3 number(5);
BEGIN
	n1:=&n1;
	n2:=&n2;
	n3:=&n3;
	if n1>n2 AND n1>n3 then
		dbms_output.put_line('n1'||n1);
	elsif n2>n1 AND n2>n3 then
		dbms_output.put_line('n2'||n2);
	else
		dbms_output.put_line('n3'||n3);
	end if;
end;
/