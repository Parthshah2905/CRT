#include <iostream>
using namespace std;


void swap(int* a, int* b) {
    int temp = *a; 
    *a = *b;       
    *b = temp;     
}

int main() {
    int x = 10, y = 20;

    cout << "Before: x = " << x << ", y = " << y << endl;

    // Pass the addresses of x and y using the address-of operator (&)
    swap(&x, &y);

    cout << "After:  x = " << x << ", y = " << y << endl;

    return 0;
}
