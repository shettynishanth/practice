DECLARE
	cursor empcur is select emp_id,emp_name,sal,city from emp order by sal DESC;
	i number:=1;
	