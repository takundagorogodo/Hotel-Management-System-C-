#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> b(7);  // initialize vector b with size 7
    vector<int> a(b.begin(), b.end());  // a is a copy of b, size 7 with default-initialized elements (0)

    cout << "Enter 7 elements for the vector:" << endl;
    for (int i = 0; i < a.size(); i++) {
        cin >> a[i];
    }

    cout << "Forward traversal of the vector:" << endl;
    vector<int>::iterator it;
    for (it = a.begin(); it != a.end(); it++) {
        cout << *it << endl;
    }

    // Fixing the insert usage
    // a.insert(position, count, value);
    // Here: insert 7 copies of 9 at position 4 (i.e., index 4)
    a.insert(a.begin() + 4, 7, 9);

    cout << "Reverse traversal of the updated vector:" << endl;
    vector<int>::reverse_iterator rit;
    for (rit = a.rbegin(); rit != a.rend(); rit++) {
        cout << *rit << endl;
    }

    // Vector properties
    cout << "The first element is: " << a.front() << endl;
    cout << "The last element is: " << a.back() << endl;
    cout << "The size of vector is: " << a.size() << endl;
    cout << "The capacity of vector is: " << a.capacity() << endl;

    return 0;
}
