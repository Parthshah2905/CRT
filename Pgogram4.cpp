#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for(int i = 1; i <= rows; i++) {
        // 1. Print leading spaces to center the stars
        for(int space = 1; space <= rows - i; space++) {
            cout << " ";
        }

        // 2. Print stars (formula: 2*i - 1 stars per row)
        for(int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }

        // 3. Move to the next line
        cout << endl;
    }

    return 0;
}
