// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise

// Last Modified Date: 4/10/2024


#include <iostream>
using namespace std;

int main()
{
	float average;	// holds the grade average

	cout << "Input your average:" << endl;
	cin >> average;

	if (average > 100)
		cout << "Invalid data" << endl;

    else if (average >= 90) {
        cout << "A category" << endl;
    }
    else if (average >= 80) {
        cout << "B category" << endl;
    }
    else if (average >= 60) {
        cout << "You Pass" << endl;
    }
    else if (average >= 0) {
        cout << "You Fail" << endl;
    }
    else {
        cout << "Invalid data" << endl;
    }

    return 0;
}