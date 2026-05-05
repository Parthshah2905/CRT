#include <iostream>
using namespace std;

int Volume(int shots) {
    return shots * 30; 
}

int main() {
    int numShots;
    cout << "Enter number of coffee shots: ";
    cin >> numShots;

    int totalVolume = Volume(numShots);
    cout << "Total coffee volume: " << totalVolume << " ml" << endl;

    return 0;
}
