#include <iostream>
using namespace std;

int main() {
    // Declare variables for radius, height, and volume
    double radius, height, volume;
    const double pi = 3.14;  // Use 3.14 as the value of pi

    // Prompt the user for input
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Calculate the volume of the cylinder using the formula π * r^2 * h
    volume = pi * radius * radius * height;

    // Display the result
    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}