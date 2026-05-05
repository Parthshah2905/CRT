#include <iostream>
using namespace std;

// Function using a reference (&) to update the original variable
void applyDiscount(double &bill) {
    double discount = bill * 0.10;
    bill = bill - discount; // Original bill is updated directly
}

int main() {
    double bill;

    // Get input from user
    cout << "Enter the original bill amount: ";
    cin >> bill;

    applyDiscount(bill);

    cout << "Bill after 10% discount: " << bill<< endl;

    return 0;
}