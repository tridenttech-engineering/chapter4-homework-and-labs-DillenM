// Lab4-6.cpp - displays the area of a triangle
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
		// Declare variables for base, height, and area
		int base = 0;
		int height = 0;
		double area = 0.0;

		// Prompt the user to input the base of the triangle
		cout << "Enter the base of the triangle: ";
		cin >> base;

		// Prompt the user to input the height of the triangle
		cout << "Enter the height of the triangle: ";
		cin >> height;

		// Calculate the area of the triangle using the formula: (base * height) / 2
		area = (base) * height / 2.0;

		// Display the result
		cout << "The area of the triangle is: " << area << endl;

		return 0;
}   // End of main function