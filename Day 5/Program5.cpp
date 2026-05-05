#include <iostream>
using namespace std;

// Function with a default argument (speed = 100)
void drive(int speed = 100) {
    cout << "Driving at " << endl;
}

int main() {
    // 1. Calling without a parameter
    // This will use the default value: 100
    drive(); 

    // 2. Calling with a parameter
    // This will override the default and use: 150
    drive(150);

    return 0;
}