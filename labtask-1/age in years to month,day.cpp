#include <iostream>
using namespace std;

int main()
{
    cout << "My Name Is Abdul rafay " << endl;
    cout << "My Sap-iD Is 73765" << endl;
    int ageInYears;
    int ageInMonths, ageInDays;
	cout << "Enter your age in years: ";
    cin >> ageInYears; 
    ageInMonths = ageInYears * 12;
    ageInDays = ageInYears * 365;
    cout << "Your age in months is: " << ageInMonths << endl;
    cout << "Your age in days is: " << ageInDays << endl;

    return 0; 
}
