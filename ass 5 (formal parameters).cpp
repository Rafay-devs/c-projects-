#include <iostream>
using namespace std;
void add(int a, int b)
{
    int sum = a + b;
    cout << "Sum = " << sum << endl;
}

int main()
{
    int x = 5, y = 10;
    add(x, y);
    return 0;
}
