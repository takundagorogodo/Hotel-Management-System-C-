#include <iostream>
using namespace std;

class Item {
private:
    string name;
    int quantity;
    int sold;
    int price;

public:
    Item(string n, int q, int p) {
        name = n;
        quantity = q;
        sold = 0;
        price = p;
    }

    void order() {
        int quant;
        cout << "\nEnter quantity of " << name << " : ";
        cin >> quant;

        if (quantity - sold >= quant) {
            sold += quant;
            cout << quant << " " << name << " ordered successfully\n";
        } else {
            cout << "Only " << quantity - sold << " " << name << " remaining\n";
        }
    }

    void report() {
        cout << "\nItem : " << name;
        cout << "\nTotal available : " << quantity;
        cout << "\nSold : " << sold;
        cout << "\nRemaining : " << quantity - sold;
        cout << "\nTotal collection : " << sold * price << "\n";
    }
};

int main() {

    int q;

    cout << "Enter number of rooms: ";
    cin >> q;
    Item rooms("Rooms", q, 1200);

    cout << "Enter quantity of Pasta: ";
    cin >> q;
    Item pasta("Pasta", q, 250);

    cout << "Enter quantity of Burger: ";
    cin >> q;
    Item burger("Burger", q, 250);

    cout << "Enter quantity of Noodles: ";
    cin >> q;
    Item noodles("Noodles", q, 200);

    cout << "Enter quantity of Shake: ";
    cin >> q;
    Item shake("Shake", q, 140);

    cout << "Enter quantity of Chicken Roll: ";
    cin >> q;
    Item chicken("Chicken Roll", q, 120);

    int choice;

    while (true) {

        cout << "\n\n------ MENU ------\n";
        cout << "1. Rooms\n";
        cout << "2. Pasta\n";
        cout << "3. Burger\n";
        cout << "4. Noodles\n";
        cout << "5. Shake\n";
        cout << "6. Chicken Roll\n";
        cout << "7. Sales Report\n";
        cout << "8. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            rooms.order();
            break;
        case 2:
            pasta.order();
            break;
        case 3:
            burger.order();
            break;
        case 4:
            noodles.order();
            break;
        case 5:
            shake.order();
            break;

        case 6:
            chicken.order();
            break;

        case 7:
            cout << "\n\n------ SALES REPORT ------\n";
            rooms.report();
            pasta.report();
            burger.report();
            noodles.report();
            shake.report();
            chicken.report();
            break;

        case 8:
            return 0;

        default:
            cout << "Invalid choice\n";
        }
    }
}
