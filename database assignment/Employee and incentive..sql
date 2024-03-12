/* 2. Create table given below: Employee and IncentiveTable */

create database Employee_and_Incentive;
use  Employee_and_Incentive;

create table Employee (
 Employee_id int auto_increment,
 First_name varchar (50),
 Last_name varchar (50),
 salary int,
 joining_date varchar (100),
 Department varchar (50),
primary key (Employee_id)
);

insert into Employee (Employee_id,First_name,Last_name,salary,joining_date,Department)
values ('1','john','Abraham','1000000','01-JAN-13  12.00.00 AM','Banking'),
('2','michael','Clarke','80000','01-JAN-13  12.00.00','Insurance'),
('3','Roy','Thomas','70000','01-FEB-13  12.00.00 AM','Banking'),
('4','Tom','jose','60000','01-FEB-13  12.00.00  AM','Insurance'),
('5','Jerry','pinto','650000','01-FEB-13 12.00.00  AM ','Insurance'),
('6','philip','mathew','750000','01-FEB-13 12.00.00 AM','services'),
('7','Testname1','123','65000','01-FEB-13 12.00.00 Am ','services'),
('8','Testname2','lname%','600000','01-FEb-13 12.00.00 Am ','services');

create table Incentive (
Employee_id int auto_increment,
incentive_date varchar (70),
incentive_about int,
foreign key (Employee_id) references Employee (Employee_id)
);

insert into Incentive (Employee_id,incentive_date,incentive_about)
values ('1','01-FEB-13','5000'),
('2','01-FEb-13','3000'),
('3','01-FEB-13','4000'),
('1','01-JAN-13','4500'),
('2','01-JAN-13','3500');

/* 3. Get First_Name from employee table using Tom name “Employee Name”. */

select * from Employee;
select first_name as Employee_Name from Employee;

/*  4. Get FIRST_NAME, Joining Date, and Salary from employee table. */

select first_name , joining_date , salary from Employee ;

/* 5.  Get all employee details from the employee table order by First_Name 
Ascending and Salary descending? */

select first_name , salary from Employee 
order by salary asc;

select first_name , salary from Employee 
order by salary desc;

/*  6. Get employee details from employee table whose first name contains ‘J’. */

select * from Employee 
where first_name like 'J%'

/* 7. Get department wise maximum salary from employee table order by */
 
 select max(salary),salary
 from employee
 group by salary
 
 /* 8. salaryascending? */
 
 select salary from employee
 order by salary asc;
 
 select salary from employee 
 order by salary desc;

/* 	9. Select first_name, incentive amount from employee and incentives table for those employees who have incentives and 
		incentive amount greater than 3000 */
select employee.First_name,incentive.Incentive_amount
from incentive
inner join employee
on incentive.Employee_ref_id = employee.Employee_id
where Incentive_amount>3000;


/* 10. Create After Insert trigger on Employee table which insert records in viewtable */

create table viewtable(
	Employee_id int auto_increment,
    First_name varchar(30),
    Last_name varchar(30),
    Salary int,
    Joining_date varchar(50),
    Department varchar(30),
    primary key(Employee_id)
);

DELIMITER //
create trigger insert_viewtable after insert on employee
for each row
begin
insert into viewtable(First_name,Last_name,Salary,Joining_date,Department)
values(new.First_name,new.Last_name,new.Salary,new.Joining_date,new.Department);
end //
DELIMITER ;
insert into employee(First_name,Last_name,Salary,Joining_date,Department)
values ('FName01','LName01',500000,'01-FEB-13 12:00:00 AM','Devlopment');