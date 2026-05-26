#include <iostream>
#include <fstream>
#include <string>     
#include <cstdlib>    
using namespace std;

void login();
void registration();
void forgot();
void hotelManagement();

// -- Main Function 
int main() {
    
    int choice;
    while (true) {
        cout << "\n\n\t\t\t==================================================\n";
        cout << "\t\t\t           WELCOME TO THE LOGIN PAGE\n";
        cout << "\t\t\t================      MENU      ==================\n";
        cout << "\t\t\t                                                  \n";
        cout << "\t| Press 1 to LOGIN                       |\n";
        cout << "\t| Press 2 to REGISTER                    |\n";
        cout << "\t| Press 3 if you forgot your PASSWORD    |\n";
        cout << "\t| Press 4 to EXIT                        |\n";
        cout << "\t|----------------------------------------|\n";
        cout << "\nPlease enter your choice: ";
        
        cin >> choice;

        switch (choice) {
            case 1:
                login();
                break;
            case 2:
                registration();
                break;
            case 3:
                forgot();
                break;
            case 4:
                cout << "\n\t\t\tGoodbye!\n";
                exit(0);
            default:
                system("cls");
                cout << "\n\t\tInvalid choice! Please try again.\n";
        }
    }
    return 0;
}

void login() {
    int count = 0;                  
    string userId, password, id, pass;
    system("cls");
    cout << "\t\t\t Please enter the username and password\n";
    cout << "\t\t\t USERNAME: ";
    cin >> userId;
    cout << "\t\t\t PASSWORD: ";
    cin >> password;

    ifstream input("records.txt");

    if (!input) {   
        cout << "\n\t\t No user records found. Please register first.\n";
        return;
    }

    while (input >> id >> pass) {
        if (id == userId && pass == password) {
            count = 1;
            break;      
        }
    }
    input.close();   

    if (count == 1) {
        cout << "\n\t\t" << userId << " - LOGIN successful!\n";
        cout << "\t\t Press any key to enter the hotel system...\n";
        cin.get();
        cin.get();   
        
        hotelManagement();      
        
    } else {
        cout << "\n\t\tLOGIN ERROR! Incorrect username or password.\n";
    }
}

void registration() {
    string userId, password;
    system("cls");
    cout << "\t\t\t Enter the username: ";
    cin >> userId;
    cout << "\t\t\t Enter the password: ";
    cin >> password;

    ifstream input("records.txt");
    string id, pass;
    bool exists = false;
    if (input) {
        while (input >> id >> pass) {
            if (id == userId) {
                exists = true;
                break;
            }
        }
        input.close();
    }

    if (exists) {
        cout << "\n\t\tThis username is already taken. Try again.\n";
        return;
    }

    ofstream out("records.txt", ios::app);
    out << userId << " " << password << "\n";
    out.close();
    cout << "\n\t\t Registration successful!\n";
}

void forgot() {
    string userId;
    system("cls");
    cout << "\t\t\t Enter your username to recover password: ";
    cin >> userId;

    ifstream input("records.txt");
    string id, pass;
    bool found = false;

    if (input) {
        while (input >> id >> pass) {
            if (id == userId) {
                found = true;
                cout << "\n\t\tYour password is: " << pass << "\n";
                break;
            }
        }
        input.close();
    }

    if (!found) {
        cout << "\n\t\t Username not found!\n";
    }
}

void hotelManagement() {
    system("cls");
    int quant, choice;

    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
    
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
    
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

    cout << "\n\t\tQuantity of items we have\n";
    cout << "\nRooms available: ";
    cin >> Qrooms;
    cout << "Quantity of Pasta: ";
    cin >> Qpasta;
    cout << "Quantity of Burger: ";
    cin >> Qburger;
    cout << "Quantity of Noodles: ";
    cin >> Qnoodles;
    cout << "Quantity of Shake: ";
    cin >> Qshake;
    cout << "Quantity of Chicken-roll: ";
    cin >> Qchicken;

    while (true) {
        cout << "\n\n\t\tPlease select from the menu options:\n";
        cout << "1) Rooms\n";
        cout << "2) Pasta\n";
        cout << "3) Burger\n";
        cout << "4) Noodles\n";
        cout << "5) Shake\n";
        cout << "6) Chicken-roll\n";
        cout << "7) Sales & Collection Report\n";
        cout << "8) Exit Hotel System\n";
        cout << "\nPlease enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter the number of rooms you want: ";
                cin >> quant;
                if (Qrooms - Srooms >= quant) {
                    Srooms += quant;
                    Total_rooms += (quant * 1200);
                    cout << "\n\t\t" << quant << " room(s) allocated for you.\n";
                } else {
                    cout << "\n\tOnly " << Qrooms - Srooms << " room(s) remaining!\n";
                }
                break;

            case 2:
                cout << "\nEnter your Pasta quantity: ";
                cin >> quant;
                if (Qpasta - Spasta >= quant) {
                    Spasta += quant;
                    Total_pasta += (quant * 250);
                    cout << "\n\t\t" << quant << " pasta(s) ordered!\n";
                } else {
                    cout << "\n\tOnly " << Qpasta - Spasta << " pasta(s) remaining!\n";
                }
                break;  

            case 3:
                cout << "\nEnter your Burger quantity: ";
                cin >> quant;
                if (Qburger - Sburger >= quant) {
                    Sburger += quant;
                    Total_burger += (quant * 250);
                    cout << "\n\t\t" << quant << " burger(s) ordered!\n";
                } else {
                    cout << "\n\tOnly " << Qburger - Sburger << " burger(s) remaining!\n";
                }
                break;

            case 4:
                cout << "\nEnter your Noodles quantity: ";
                cin >> quant;
                
                if (Qnoodles - Snoodles >= quant) {
                    Snoodles += quant;
                    Total_noodles += (quant * 250);
                    cout << "\n\t\t" << quant << " noodles ordered!\n";
                } else {
                    cout << "\n\t Only " << Qnoodles - Snoodles << " noodles remaining!\n";
                }
                break;

            case 5:
                cout << "\n  Enter your Shake quantity: ";
                cin >> quant;
                
                if (Qshake - Sshake >= quant) {
                    Sshake += quant;
                    Total_shake += (quant * 140);
                    cout << "\n\t\t" << quant << " shake(s) ordered!\n";
                } else {
                    cout << "\n\t Only " << Qshake - Sshake << " shake(s) remaining!\n";
                }
                break;

            case 6:
                cout << "\n Enter your Chicken-roll quantity: ";
                cin >> quant;
                
                if (Qchicken - Schicken >= quant) {
                    Schicken += quant;
                    Total_chicken += (quant * 120);
                    cout << "\n\t\t" << quant << " chicken-roll(s) ordered!\n";
                } else {
                    cout << "\n\t Only " << Qchicken - Schicken << " chicken-roll(s) remaining!\n";
                }
                break;

            case 7:
                cout << "\n\n =========== SALES & COLLECTIONS REPORT ===========\n";
                
                cout << "\n Rooms we had: " << Qrooms;
                cout << "\n Rooms rented: " << Srooms;
                cout << "\n Rooms remaining: " << Qrooms - Srooms;
                cout << "\n Total room revenue: Rs. " << Total_rooms;

                cout << "\n\n Pasta we had: " << Qpasta;
                cout << "\n Pasta sold: " << Spasta;
                cout << "\n Pasta remaining: " << Qpasta - Spasta;
                cout << "\n Total pasta revenue: Rs. " << Total_pasta;

                cout << "\n\n Burgers we had: " << Qburger;
                cout << "\n Burgers sold: " << Sburger;
                cout << "\n Burgers remaining: " << Qburger - Sburger;
                cout << "\n Total burger revenue: Rs. " << Total_burger;

                cout << "\n\n Noodles we had: " << Qnoodles;
                cout << "\n Noodles sold: " << Snoodles;
                cout << "\n Noodles remaining: " << Qnoodles - Snoodles;
                cout << "\n Total noodles revenue: Rs. " << Total_noodles;

                cout << "\n\n Shakes we had: " << Qshake;
                cout << "\n Shakes sold: " << Sshake;
                cout << "\n Shakes remaining: " << Qshake - Sshake;
                cout << "\n Total shake revenue: Rs. " << Total_shake;

                cout << "\n\n Chicken-rolls we had: " << Qchicken;
                cout << "\n Chicken-rolls sold: " << Schicken;
                cout << "\n Chicken-rolls remaining: " << Qchicken - Schicken;
                cout << "\n Total chicken-roll revenue: Rs. " << Total_chicken;
                cout << "\n ==================================================\n";
                break;   

            case 8:
                cout << "\n\t\t Exiting hotel system...\n";
                return;  

            default:
                cout << "\n\t\tInvalid option! Try again.\n";
        }
    }
}
