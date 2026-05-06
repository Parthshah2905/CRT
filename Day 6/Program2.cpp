#include <iostream>
using namespace std;

class AreaCalculator {
public:
    double length;
    double width;

        void printArea() {
        cout << "The area is: " << length * width << endl;
    }
};

int main() {
    AreaCalculator rect; // Create an object of the class

        cout << "Enter length: ";
    cin >> rect.length;

    cout << "Enter width: ";
    cin >> rect.width;

    rect.printArea();

    return 0;
}
