create database shopping;
use shopping;
create table customer(
	customer_id int auto_increment,
    customer_name varchar(30),
    customer_mobile varchar(30),
    customer_email varchar(30),
    customer_address varchar(30),
    primary key (customer_id)
);
create table catagory(
	catagory_id int auto_increment,
    catagory_name varchar(30),
    catagory_image varchar(50),
    primary key(catagory_id)
);
create table product(
	product_id int auto_increment,
    product_name varchar(50),
    product_price int,
    size varchar(50),
    color varchar(50),
    quantity int,
    datails varchar(50),
    category_id int,
    primary key(product_id),
    foreign key (category_id) references catagory(catagory_id)
);
create table ordertbl(
	order_id int auto_increment,
    customer_id int,
    product_id int,
    catagory_id int,
    total int,
    payment_option varchar(50),
    primary key(order_id),
    foreign key(customer_id) references customer(customer_id),
    foreign key(product_id) references product(product_id),
    foreign key(catagory_id) references catagory(catagory_id)
);
create table payment(
		payment_id int auto_increment,
        customer_name varchar(50),
        order_id int,
        total int,
        payment_type varchar(50),
        primary key (payment_id),
        foreign key(order_id) references ordertbl(order_id)
);
use shopping;
insert into catagory (catagory_name,catagory_image)
values ('bhavesh','image1.jpg');

-- delete from catagory where catagory_id=1;
-- delete from catagory ;


select * from catagory;
select catagory_name as cname;

use shopping;
insert into catagory (catagory_name,catagory_image)
values ('vijay','image2.jpg'),
 ('yash','image6.jpg'),
 ('raj','image4.jpg'),
 ('shiva','image5.jpg'),
 ('sanjay','image7.jpg'),
  ('rahul','image11.jpg'),
   ('dhaval','image10.jpg'),
    ('nilesh','image9.jpg'),
     ('ranjit','image8.jpg');
     
     
DELIMITER //
    
creatE trigger chackorderlimit12 limit befor insert on ordertbl

for each row

begin

if new.total<5000 than

SIGNAL SQLSTATE '45000' SET messege_text = 'division : ur doing it wrong';

end if;

end //

DELIMITER ;

                       
                       
     
     
     
     

 







