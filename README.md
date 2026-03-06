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
g++ hotel.cpp -o hotel
```

### Run

```bash
./hotel
```

## Learning Purpose

This project demonstrates:

* Creating and using **classes**
* Managing **data using objects**
* Building a **menu-driven console application**
* Basic **inventory and sales tracking logic**

## Author

GOROGODO TAKUNDA
