#include <iostream>  // Includes the library for input and output
#include <string>    // Includes the library to handle text (strings)

using namespace std; // Allows using standard names like cout/cin without "std::"

int main() {
    string name;

    // Output text to the screen
    cout << "What is your name? ";

    // Take input from the user
    cin >> name;

    // Display a customized message
    cout << "Hello, " << name << "! Welcome to C++." << endl;

    return 0; // Signals that the program finished successfully
}
