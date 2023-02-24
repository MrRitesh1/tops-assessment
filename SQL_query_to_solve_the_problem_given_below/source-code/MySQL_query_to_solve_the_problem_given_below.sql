
DROP DATABASE Customer_Salesman;
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

INSERT INTO Customer (Customer_Id, Customer_name , City ,Grade ,Salesman_Id) 
VALUES
( 3002 , "Nick Rimando" , "New York" , 100 ,5001 ),
( 3007 , "Brad Davis" , "New York" , 200 , 5001 ),
( 3005 , "Graham Zusi" , "California" , 200 , 5002 ),
( 3008 , "Julian Green" , "London" , 300 , 5002 ),
( 3004 , "Fabian Cameron" , "Paris" , 300 , 5006 ),
( 3009 , "Geoff Cameron" , "Berlin" , 100 , 5003 ),
( 3003 , "Jozy Altidor" , "Moscow" , 200 , 5007 );
INSERT INTO Customer (Customer_Id, Customer_name , City  ,Salesman_Id) 
VALUES( 3001 , "Brad Guzan" , "London" , 5005);
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

INSERT INTO Salesman (Salesman_Id, Name , City ,Commission ) 
VALUES
( 5001 , "James Hoog" , "New York" , 0.15),
( 5002 , "Nail Knite" , "Paris" , 0.13),
( 5005 , "Pit Alex" , "Paris" , 0.11),
( 5006 , "Mc Lyon" , "Paris" , 0.14),
( 5007 , "Paul Adam" , "Rome" , 0.13),
( 5003 , "Lauson Hen" , "San Jose" , 0.12);
 
/* From the above given tables write a SQL query to find the salesperson(s) and the 
   customer(s) represented here. Return the Customer Name, City, Salesman, 
   commission.

   NOTE : Make sure you have to use JOIN concept to solve the query 
          Make sure to make your code clean kneat
*/

select C.*,S.* from Customer as C left join Salesman as S on S.Salesman_Id = C.Salesman_Id;

SELECT  C.Customer_name , C.City , S.Name , S.Commission FROM Customer AS C join Salesman AS S on S.Salesman_Id = C.Salesman_Id;