# Hotel Management System (C++)

## Overview

This is a simple **Hotel Management System** written in **C++** using Object-Oriented Programming.
The program allows a user to manage hotel services such as **room bookings and food orders**, while also keeping track of available quantities and total sales.

It runs in the **command-line interface** and is suitable for beginners learning **C++ classes, objects, and basic inventory management logic**.

## Features

* Order hotel rooms and food items
* Check available quantity before confirming an order
* Track how many items have been sold
* Generate a **complete sales report**
* Menu-driven interface for easy interaction

## Items Managed

The system currently supports the following items:

* Rooms
* Pasta
* Burger
* Noodles
* Shake
* Chicken Roll

Each item has:

* Total available quantity
* Number sold
* Remaining quantity
* Total revenue generated

## Technologies Used

* **C++**
* **Object-Oriented Programming (Classes & Objects)**
* **Standard Input/Output (iostream)**

## How It Works

1. The user enters the initial quantity for each item.
2. A menu is displayed with ordering options.
3. When an order is placed:

   * The program checks if enough quantity is available.
   * If available, the order is processed.
4. The **Sales Report** option displays all item statistics.

## How to Run

### Compile

```bash
g++ hotel_management.cpp -o hotel
```

### Run

```bash
./hotel
```
## Sample Output

```
Enter number of rooms: 10
Enter quantity of Pasta: 20
Enter quantity of Burger: 15
Enter quantity of Noodles: 12
Enter quantity of Shake: 18
Enter quantity of Chicken Roll: 25


------ MENU ------
1. Rooms
2. Pasta
3. Burger
4. Noodles
5. Shake
6. Chicken Roll
7. Sales Report
8. Exit

Enter choice: 2

Enter quantity of Pasta : 5
5 Pasta ordered successfully


------ MENU ------
Enter choice: 3

Enter quantity of Burger : 4
4 Burger ordered successfully


------ MENU ------
Enter choice: 7


------ SALES REPORT ------

Item : Rooms
Total available : 10
Sold : 0
Remaining : 10
Total collection : 0

Item : Pasta
Total available : 20
Sold : 5
Remaining : 15
Total collection : 1250

Item : Burger
Total available : 15
Sold : 4
Remaining : 11
Total collection : 1000

Item : Noodles
Total available : 12
Sold : 0
Remaining : 12
Total collection : 0

Item : Shake
Total available : 18
Sold : 0
Remaining : 18
Total collection : 0

Item : Chicken Roll
Total available : 25
Sold : 0
Remaining : 25
Total collection : 0
```

## Learning Purpose

This project demonstrates:

* Creating and using **classes**
* Managing **data using objects**
* Building a **menu-driven console application**
* Basic **inventory and sales tracking logic**

## Author

GOROGODO TAKUNDA
