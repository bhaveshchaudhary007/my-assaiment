create database salespeople;
use salespeople ;


/* 18. Write a SQL statement that displays all the information about all salespeople */

create table Salseperson(
	Salseman_id int not null primary key,
    SName varchar(30),
    City varchar(30),
    Commission int
    );

insert into Salseperson
values(5001,'James Hoog','New York',0.15),
(5002,'Nail Knite','Paris',0.13),
(5005,'Pit Alex','London',0.11),
(5006,'Mc Lyon','Paris',0.14),
(5007,'Paul Adam','Rome',0.13),
(5003,'Lauuuson Hen','San Jose',0.12);

select *
from Salseperson;


/* 19. From the following table, write a SQL query to find orders that are delivered by a salesperson with ID. 5001. Return ord_no, 
	ord_date, purch_amt */
    
    
create table Orders(
	ord_no int not null primary key,
    purch_amt float,
    ord_date varchar(30),
    Customer_id int,
    Salseman_id int
    );
    
    insert into Orders
    values(70001,150.5,'2012-10-05',3005,5002),
    (70009,270.65,'2012-09-10',3001,5005),
    (70002,65.26,'2012-10-05',3002,5001),
    (70004,110.5,'2012-08-17',3009,5003),
    (70007,948.5,'2012-09-10',3005,5002),
    (70005,2400.6,'2012-07-27',3007,5001),
    (70008,5760,'2012-09-10',3002,5001),
    (70010,1983.43,'2012-10-10',3004,5006),
    (70003,2480.4,'2012-10-10',3009,5003),
    (70012,250.45,'2012-06-27',3008,5002),
    (70011,75.29,'2012-08-17',3003,5007),
    (70013,3045.6,'2012-04-25',3002,5001);

select ord_no,ord_date,purch_amt
from Orders
where salseman_id = 5001;



/*  from 20 to 24 */


create table item_mast(
	pro_id int not null primary key,
    pro_name varchar(30),
    pro_price float,
    pro_com int 
    );
insert into item_mast
values(101,'Mother Board',3200,15),
(102,'Key Board',450,16),
(103,'ZIP Driver',250,14),
(104,'Speaker',550,16),
(105,'Monitor',5000,11),
(106,'DVD Drive',900,12),
(107,'CD Drive',800,12),
(108,'Printer',2600,13),
(109,'Refill cartridge',350,13),
(110,'Mouse',250,12);


/* 20. From the following table, write a SQL query to select a range of products whose price is in the range Rs.200 to Rs.600. Begin and end
	values are included. Return pro_id, pro_name, pro_price, and pro_com. */
    
select pro_id,pro_name,pro_com
from item_mast
where pro_price between 200 and 600;


/*  21. From the following table, write a SQL query to calculate the average price for a manufacturer code of 16. Return avg. */


select AVG(pro_price) as average_price
from item_mast
where pro_com = 16;


/* 22. From the following table, write a SQL query to display the pro_name as 'Item Name' and pro_price as 'Price in Rs.' */

select pro_name as item_name,pro_price as price_in_Rs
from item_mast;


/* 23. From the following table, write a SQL query to find the items whose prices are higher than or equal to $250. Order the result by 
product price in descending, then product name in ascending. Return pro_name and pro_price. */

select pro_name,pro_price
from item_mast
where pro_price>=250
order by pro_price desc, pro_name asc;


/* 24. From the following table, write a SQL query to calculate average price of the items for each company. Return average price and 
	company code. */


select pro_com, avg(pro_price) as average_price
from item_mast
group by pro_com;