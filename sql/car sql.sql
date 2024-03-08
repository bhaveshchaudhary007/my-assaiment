create database car_rental_system;
use car_rental_system;

-- driver's data table
create table Driver(
	Driver_id int auto_increment,
    Driver_name varchar(30),
    Driver_age int,
    Driver_mobile varchar(30),
    Driver_email varchar(30),
    Driving_license varchar(30),
    Driver_address_proof varchar(50),
    primary key(Driver_id)
);

-- Vehicle adta table 
create table Vehicle(
	Vehicle_id int auto_increment,
    Driver_id int,
    Vehicle_name varchar(30),
    Vehicle_insurance varchar(30),
    Vehicle_reg_certificate varchar(30),
    Vehicle_permit varchar(30),
    primary key(Vehicle_id),
    foreign key(Driver_id) references Driver(Driver_id)
);

-- passenger's data table
create table passenger(
	Passenger_id int auto_increment,
    Passenger_name varchar(30),
    Passenger_mobile varchar(30),
    Passenger_email varchar(30),
    Passenger_age int,
    primary key(Passenger_id)
);

-- Ride booking data table
create table Ride_booking(
	Booking_id int auto_increment,
    Booking_time varchar(30),
    Passenger_id int,
    Driver_id int,
    Booking_address_point varchar(50),
    Ride_status bool,
    primary key(Booking_id),
    foreign key(Passenger_id) references Passenger(Passenger_id),
    foreign key(Driver_id) references Driver(Driver_id)
);

-- Payment data table
create table Payment(
	Payment_id int auto_increment,
    Passenger_id int,
    Driver_id int,
    Distance int,
    Total_payment int,
    Payment_method varchar(30),
    primary key (Payment_id),
    foreign key(Passenger_id) references Passenger(Passenger_id),
    foreign key(Driver_id) references Driver(Driver_id)
);

-- Ride history data table 
create table Ride_History(
	History_id int auto_increment,
    Ride_starting_time varchar(30),
    Passenger_id int,
    Driver_id int,
    Vehicle_id int,
    Payment_id int,
    GPS_location_start varchar(50),
    GPS_location_end varchar(50),
    primary key(History_id),
    foreign key(Passenger_id) references Passenger(Passenger_id),
    foreign key(Driver_id) references Driver(Driver_id),
    foreign key(Vehicle_id) references Vehicle(Vehicle_id),
    foreign key(Payment_id) references Payment(Payment_id)
);

-- Feedback and rating data table
create table Feedback(
	Feedback_id int auto_increment,
    Passenger_id int,
    Driver_id int,
    History_id int,
    Rating_star int,
    Feedback_Description varchar(100),
    primary key(Feedback_id),
    foreign key(Passenger_id) references Passenger(Passenger_id),
    foreign key(Driver_id) references Driver(Driver_id),
    foreign key(History_id) references Ride_History(History_id)
);

drop table feedback;

use car_rental_system;

-- -- Driver's data 
insert into Driver(Driver_name,Driver_age,Driver_mobile,Driver_email,Driving_license,Driver_address_proof)
values ('Aditya',30,'9879300887','aditya@gmail.com','RJ-12/DLC/12/ 784532','aditya_aadharcard.pdf'),	-- 1
('Gopal',32,'9903288766','gopal@gmail.com','RJ-11/DLC/12/ 456678','gopal_aadharcard.pdf'),				-- 2
('Jaydev',28,'9123674399','jaydev@gmail.com','RJ-03/DLC/12/ 993475','jaydev_light_bill.pdf'),			-- 3
('Naveen',26,'9867547689','naveen@gmail.com','RJ-12/DLC/12/ 098757','naveen_aadharcard.pdf'),			-- 4
('Jay',27,'923577277','jay@gmail.com','RJ-23/DLC/12/ 238945','jay_aadharcard.pdf'),						-- 5
('Ravi',28,'9979988091','ravi@gmail.com','RJ-18/DLC/12/ 987532','ravi_voter_id.pdf'),					-- 6
('Amit',27,'9824288662','amit@gmail.com','RJ-13/DLC/12/ 909090','amit_aadharcard.pdf'),					-- 7
('Rajesh',39,'9809855255','rajesh@gmail.com','RJ-12/DLC/12/ 987987','rajesh_aadharcard.pdf'),			-- 8
('Deepak',38,'9098776723','deepak@gmail.com','RJ-02/DLC/12/ 234765','deepak_aadharcard.pdf'),			-- 9
('Dev',29,'9090919293','dev@gmail.com','RJ-10/DLC/12/ 097986','devlightbill.pdf'),						-- 10
('Ram',30,'9904188662','ram@gmail.com','RJ-11/DLC/12/ 984109','ram_aadharcard.pdf');					-- 11


insert into Vehicle(Driver_id,Vehicle_name,Vehicle_insurance,Vehicle_reg_certificate,Vehicle_permit)
values (1,'Opel Omega','12345678','vrc_2334.pdf','V_2334_permit.pdf'),
(2,'Toyota Crown','23456789','vrc_3445.pdf','V_3445_permit.pdf'),
(3,'Hyundai i40','34567891','vrc_4556.pdf','V_4556_permit.pdf'),
(4,'Toyota limo','45678911','vrc_5667.pdf','V_5667_permit.pdf'),
(5,'Honda Amaze','56789101','vrc_6778.pdf','V_6778_permit.pdf'),
(6,'Harrier','67891011','vrc_7889.pdf','V_7889_permit.pdf'),
(7,'Nexon','78910111','vrc_8990.pdf','V_8990_permit.pdf'),
(8,'Tiago','89101112','vrc_1223.pdf','V_1223_permit.pdf'),
(9,'Altroz','91012132','vrc_2345.pdf','V_2345_permit.pdf'),
(10,'Hyundai Exter','23894576','vrc_3456.pdf','V_3456_permit.pdf'),
(11,'Hinda City','34875698','vrc_4567.pdf','V_4567_permit.pdf');


    
insert into passenger(Passenger_name,Passenger_mobile,Passenger_email,Passenger_age)
values ('Aisha','9752625611','aisha@gmail.com','23'),		-- 1
('Rahul','9010840592','rahul@gmail.com','22'),				-- 2
('Arya','9980867330','arya@gmail.com','24'),				-- 3
('Arjun','9089534149','arjun@gmail.com','23'),				-- 4
('Riya','9632909465','riya@gmail.com','25'),				-- 5
('Mira','9649323445','mira@gmail.com','27'),				-- 6
('Trisha','9344533358','trisha@gmail.com','29'),			-- 7
('Vijay','9237772909','vijay@gmail.com','26'),				-- 8
('Vivek','9384754632','vivek@gmail.com','35'),				-- 9
('Sanjay','9548262708','sanjay@gmail.com','32'),			-- 10
('Rakesh','9410285363','rakesh@gmail.com','33'),			-- 11
('Nilesh','9669758248','nilesh@gmail.com','24'),			-- 12
('Varun','9697445604','varun@gmail.com','25'),				-- 13
('Sachin','9440504611','sachin@gmail.com','27'),			-- 14
('Milan','9681625860','milan@gmail.com','23');				-- 15


insert into Ride_booking(Booking_time,Passenger_id,Driver_id,Booking_address_point,Ride_status)
values ('09:35AM 13/02/24',3,5,'Navrangpura, Ahmedabad',1),
('09:37AM 13/02/24',2,6,'Ambawadi, Ahmedabad',1),
('09:40AM 13/02/24',4,8,'Hyatt Regency, Ashram Road, Ahmedabad',1),
('09:45AM 13/02/24',5,1,'Sarvottam Nagar Society, Navrangpura, Ahmedabad',1),
('09:46AM 13/02/24',6,2,'Sandesh Press Rd, Vastrapur, Ahmedabad',1),
('09:50AM 13/02/24',7,4,'Krishna Complex, Bodakdev, Ahmedabad',1),
('09:55AM 13/02/24',8,9,'Gandhinagar Hwy, Thaltej, Ahmedabad',0),
('09:59AM 13/02/24',8,7,'Gandhinagar Hwy, Thaltej, Ahmedabad',1),
('10:00AM 13/02/24',9,10,'Vasant Vihar, Navrangpura, Ahmedabad',1),
('10:10AM 13/02/24',1,9,'Shri Bhuvan, Memnagar, Ahmedabad',0),
('10:10AM 13/02/24',10,11,'Passport Office, Gulbai Tekra, Ahmedabad',1),
('10:12AM 13/02/24',12,9,'New India Colony, Naroda, Ahmedabad',1),
('10:15AM 13/02/24',13,5,'Swastik Society, Navrangpura, Ahmedabad',1),
('10:20AM 13/02/24',11,6,'Kocharab, Paldi, Ahmedabad',0),
('10:21AM 13/02/24',11,3,'Kocharab, Paldi, Ahmedabad',1),
('10:30AM 13/02/24',14,6,'Passport Office, Gulbai Tekra, Ahmedabad',1),
('10:32AM 13/02/24',15,1,'Polytechnic Rd, Ambawadi, Ahmedabad',1),
('10:34AM 13/02/24',3,2,'Law Garden, Ahmedabad',0),
('10:35AM 13/02/24',3,8,'Law Garden, Ahmedabad',1),
('10:39AM 13/02/24',1,2,'Shri Bhuvan, Memnagar, Ahmedabad',1); 
    
-- truncate table  Ride_booking;

insert into Payment(Passenger_id,Driver_id,Distance,Total_payment,Payment_method)
values (3,5,10,200,'online'),
(2,6,7,140,'cash'),
(4,8,11,240,'cash'),
(5,1,2,60,'online'),
(6,2,5,100,'online'),
(7,4,6,120,'online'),
(8,7,8,160,'cash'),
(9,10,8,160,'cash'),
(10,11,14,280,'online'),
(12,9,18,360,'cash'),
(13,5,3,60,'online'),
(11,3,5,100,'online'),
(14,6,8,160,'cash'),
(15,1,7,140,'cash'),
(3,8,9,180,'cash'),
(1,2,10,200,'online');


insert into Ride_History(Ride_starting_time,Passenger_id,Driver_id,Vehicle_id,Payment_id,GPS_location_start,GPS_location_end)
values ('09:38AM 13/02/24',3,5,5,1,'Navrangpura, Ahmedabad','Shri Bhuvan, Memnagar, Ahmedabad'),
('09:40AM 13/02/24',2,6,6,2,'Ambawadi, Ahmedabad','Gandhinagar Hwy, Thaltej, Ahmedabad'),
('09:43AM 13/02/24',4,8,8,3,'Hyatt Regency, Ashram Road, Ahmedabad','Vasant Vihar, Navrangpura, Ahmedabad'),
('09:48AM 13/02/24',5,1,1,4,'Sarvottam Nagar Society, Navrangpura, Ahmedabad','Passport Office, Gulbai Tekra, Ahmedabad'),
('09:50AM 13/02/24',6,2,2,5,'Sandesh Press Rd, Vastrapur, Ahmedabad','New India Colony, Naroda, Ahmedabad'),
('09:54M 13/02/24',7,4,4,6,'Krishna Complex, Bodakdev, Ahmedabad','New India Colony, Naroda, Ahmedabad'),
('10:05AM 13/02/24',8,7,7,7,'Gandhinagar Hwy, Thaltej, Ahmedabad','Swastik Society, Navrangpura, Ahmedabad'),
('10:05AM 13/02/24',9,10,10,8,'Vasant Vihar, Navrangpura, Ahmedabad','Kocharab, Paldi, Ahmedabad'),
('10:13AM 13/02/24',10,11,11,9,'Passport Office, Gulbai Tekra, Ahmedabad','Polytechnic Rd, Ambawadi, Ahmedabad'),
('10:13AM 13/02/24',12,9,9,10,'New India Colony, Naroda, Ahmedabad','Passport Office, Gulbai Tekra, Ahmedabad'),
('10:18AM 13/02/24',13,5,5,11,'Swastik Society, Navrangpura, Ahmedabad','Navrangpura, Ahmedabad'),
('10:25AM 13/02/24',11,3,3,12,'Kocharab, Paldi, Ahmedabad','Ambawadi, Ahmedabad'),
('10:33AM 13/02/24',14,6,6,13,'Passport Office, Gulbai Tekra, Ahmedabad','Hyatt Regency, Ashram Road, Ahmedabad'),
('10:38AM 13/02/24',15,1,1,14,'Polytechnic Rd, Ambawadi, Ahmedabad','Sandesh Press Rd, Vastrapur, Ahmedabad'),
('10:39AM 13/02/24',3,8,8,15,'Law Garden, Ahmedabad','Krishna Complex, Bodakdev, Ahmedabad'),
('10:43AM 13/02/24',1,2,2,16,'Shri Bhuvan, Memnagar, Ahmedabad','Passport Office, Gulbai Tekra, Ahmedabad');


insert into Feedback(Passenger_id,Driver_id,History_id,Rating_star,Feedback_Description)
values (3,5,1,5,'Great customer support'),
(4,8,3,4,'Long wait times'),
(5,1,4,2,'Racist driver failed to pick us up & accused me of cancelling'),
(7,4,6,2,'Uber is cheating'),
(8,7,7,2,'I expressed my concern to Uber and i was ignored'),
(9,10,8,5,'UBER Made Our Trip GREAT!!!'),
(13,5,11,3,'refusal of service'),
(11,3,12,4,'Respectful drivers'),
(15,1,14,1,'Impossible to reach customer support'),
(3,8,15,5,'Used a lot lately and can’t state a fault or problem, very professional');