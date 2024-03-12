/* 11.Create table given below: Salesperson and Customer */ 

create database salesperson_and_customer;
use salesperson_and_customer;

create table salesperson (
 PK_SNO int auto_increment ,
 SNAME VARCHAR (50),
 CITY VARCHAR (50),
 COMM float,
 PRIMARY KEY (PK_SNO)
);

INSERT INTO salesperson (PK_SNO,SNAME,CITY,COMM)
VALUE ('1001','peel','london','.12'),
('1002','seeres','san jose','.13'),
('1004','motika','london','.11'),
('1007','Rafkin','Barcelona','.15'),
('1003','Axelrod','New york','.1');

create table customer (
PK_CNM INT auto_increment,
CNAME VARCHAR (50),
CITY VARCHAR (50),
RATING INT ,
FK_SNO INT,
PRIMARY KEY (PK_CNM)
);


insert INTO customer (PK_CNM,CNAME,CITY,RATING,FK_SNO)
VALUES ('201','Hoffman','London','100','1001'),
('202','Giovanne','Roe','200','1003'),
('203','Liu','San jose','300','1002'),
('204','Grass','Bracelon','100','1002'),
('206','Clemens','London','300','1007'),
('207','Pereira','Roe','100','1004')


/* 12.Retrieve the below data from above table */








/*  13.All orders for more than $1000. */

select * from salesperson where PK_SNO > 1000 
select * from customer where FK_SNO > 1000

 /* 14. Names and cities of all salespeople in London with commission above 0.12 */ 
   
 select * from salesperson 
 where COMM > 0.12
 
 select SName,City,Comm
from salesperson
where Comm > 0.11 and City ='London';
 
.
select * from salesperson 
 where COMM > 0.12
 
/* 15.All salespeople either in Barcelona or in London  */ 

select *
from Salesperson
where City = 'London' or City = 'Barcelona';

/* 16.All salespeople with commission between 0.10 and 0.12. (Boundary values should be excluded). */


select *
from salesperson
where Comm > 0.10 and Comm < 0.12;

/* 17.All customers excluding those with rating <= 100 unless they are located inRome */

select * 
from Customer
where Rating >100 or city = 'Rome';
 
 
 
 
 