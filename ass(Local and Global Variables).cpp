#include <iostream>
using namespace std;
int globalVar = 50;

void display()
{
    int localVar = 20;

    cout << "Local Variable = " << localVar << endl;
    cout << "Global Variable = " << globalVar << endl;
}
int main()
{
    display();
    cout << "Global Variable in main = " << globalVar << endl;
    return 0;
}
