#include <iostream>
using namespace std;

int main() {
    int side;
    cout << "Enter side length of the square: ";
    cin >> side;

    for (int i = 0; i < side; i++) {
        for (int j = 0; j < side; j++) {
            // Print '*' if it's the first/last row or first/last column
            if (i == 0 || i == side - 1 || j == 0 || j == side - 1) {
                cout << "* ";
            } else {
                cout << "  "; // Print spaces for the hollow interior
            }
        }
        cout << endl; // Move to the next row
    }

    return 0;
}