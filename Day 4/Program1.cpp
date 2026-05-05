#include <iostream>
using namespace std;

int main() {
    int rows = 5;    // Height
    int cols = 15;   // Width

    // Nested loops to print the rectangle
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "*";
        }
        cout << endl; // Move to next line
    }

    return 0;
}
