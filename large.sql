set serveroutput on
declare 
a int;
b int;
c int;
large int;
begin
a:=&a;
b:=&b;
c:=&c;
if a>b and a>c
large:=a;
elseif b>a and b>c
large:=b;
else 
large=c;
