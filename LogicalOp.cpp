// This program will give the take the average quarterly bill to tell the user 
// whether or not they are using too much water

// Last Modified Date: 4/10/2024

#include <iostream>
#include <iomanip> //for std:setprecision
using namespace std;

int main()
{
	//declare variables needed to store quarterly bills and average
	double q1, q2, q3, q4, averageMonthlyBill;
	// get user input for each quarter 
	std::cout <<  "Please input your water bill for quarter 1:\n";
	std::cin >> q1;
	std::cout <<  "Please input your water bill for quarter 2:\n";
	std::cin >> q2;
	std::cout <<  "Please input your water bill for quarter 3:\n";
	std::cin >> q3;
	std::cout <<  "Please input your water bill for quarter 4:\n";
	std::cin >> q4;

	averageMonthlyBill = (q1 + q2 + q3 + q4) / 12;

	// Output the average monthly bill with 2 decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Your average monthly bill is $" << averageMonthlyBill << ". ";

    // Provide feedback based on the average monthly bill
    if (averageMonthlyBill > 75) {
        std::cout << "You are using excessive amounts of water\n";
    } else if (averageMonthlyBill >= 25) {
        std::cout << "You are using a typical amount of water\n";
    } else {
        std::cout << "You are conserving water, nice work\n";
    }

    return 0;
}