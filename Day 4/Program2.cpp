#include <iostream>
using namespace std;

int main() {
    int n = 5; // Set the number of rows

    for (int i = 1; i <= n; i++) { // Outer loop for each row
        for (int j = 1; j <= i; j++) { // Inner loop to print stars
            cout << "* ";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
