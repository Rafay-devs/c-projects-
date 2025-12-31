#include <iostream>
using namespace std;
int main()
{
cout << "My Name Is Abdul rafay "<< endl;
cout << "My Sap-iD Is 73765" << endl;
int totalStudents;
double feePerStudent, totalFee;
cout << "Enter total number of students in the class: ";
cin >> totalStudents;
cout << "Enter fee per student: ";
cin >> feePerStudent;
totalFee = totalStudents * feePerStudent;
cout << "\nTotal fee collected from the class = "<<totalFee<<endl;
return 0;
}
