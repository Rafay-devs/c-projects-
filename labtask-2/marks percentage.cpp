#include <iostream> 
using namespace std; 
int main()  
{ 
cout << "My Name Is Abdul Rafay " << endl; 
cout << "My Sap-iD Is 73765.." << endl; 
double sub1, sub2, sub3, sub4, sub5; 
double total, percentage; 
cout << "Enter marks of 5 subjects separated by spaces: "; 
cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5; 
total = sub1 + sub2 + sub3 + sub4 + sub5; 
percentage = (total / 500) * 100;   
cout << "\nTotal Marks = " << total << endl; 
cout << "Percentage = " << percentage << "%" << endl; 
return 0; 
}
