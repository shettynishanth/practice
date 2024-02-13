DECLARE
	reg student.regno%type;
	sname student.name%type;
	ad1 student.add1%type;
	ad2 student.add2%type;
BEGIN
	reg:='&reg';
	select regno,name,add1,add2 into reg,sname,ad1,ad2 from student where reg=regno;
	dbms_output.put_line('regno'||reg||'name'||sname||'address'||ad1||'add'||ad2);
end;
/
