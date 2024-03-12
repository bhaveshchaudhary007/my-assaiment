/* 1. Create Table Name : Student and Exam */

create database student_and_Exam;
use student_and_Exam;

create table Student(
Roll_no int auto_increment ,
S_Name varchar(50),
Branch varchar(50),
primary key (Roll_no)
);
insert into Student (Roll_no,S_Name,Branch)
values ('1','Jay','Computer science'),
('2','Suhani','Electronic and Com'),
('3','kriti','Electronic and com');

create table Exam (
Roll_no int auto_increment ,
S_code 	varchar (50),
Mark int,
P_code varchar (50),
foreign key (Roll_no) references student (Roll_no)
);

insert into Exam (Roll_no,S_code,Mark,P_code)
values ('1','CS11','50','CS'),
('1','CS11','60','CS'),
('2','EC101	','66','EC'),
('2','EC102','70','EC'),
('3','EC101','45','EC'),
('3','EC102','50','EC')