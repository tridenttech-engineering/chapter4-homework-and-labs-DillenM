//Lab4-3.cpp - displays a salesperson's commission with user input for commission rate
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;


int main()
{
    //declare variables
    double comm_rate = 0.0;
    double sales = 0.0;
    double commission = 0.0;

    //enter input for sales amount
    cout << "Sales amount: ";
    cin >> sales;

    //enter input for commission rate
    cout << "Commission rate (in decimal form): ";
    cin >> comm_rate;

    //calculate and display the commission
    commission = sales * comm_rate;
    cout << "Commission: $" << commission << endl;

    return 0;
}
//end of main function