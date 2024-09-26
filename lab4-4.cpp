// Lab4-4.cpp - displays the volume of a cylinder
// Created/revised by <your name> on <current date>

#include <iostream> // Required for input/output operations
using namespace std;

int main() {
    // Declare variables for radius, height, and volume
    double height = 0.0;
    double radius = 0.0;
    double volume = 0.0;
    const double PI = 3.14;  // Use 3.14 as the value of pi

    // Prompt the user for the radius and height
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Calculate the volume of the cylinder using the formula π * r^2 * h
    volume = PI * radius * radius * height;

    // Display the result
    cout << "The volume of the cylinder is: " << volume << endl;

    // End of the program
    return 0;
}