create database Customer_Salesman;
use Customer_Salesman;
/* In Customer table attributes are customer id, customer name, city, grade and 
salesman id */

create table Customer (
Customer_Id int,
Customer_name varchar(50),
City varchar(40),
Grade int,
Salesman_Id int,

primary key (Customer_Id),
foreign key (Salesman_Id) references Salesman (Salesman_Id)
);


/*
In Salesman table attributes will be salesman id, name, city and commission
*/

create table Salesman (
Salesman_Id int,
Name varchar(50),
City varchar(40),
Commission float,

primary key (Salesman_Id)
);