#include <iostream>
using namespace std;
inline int square(int x)
{
    return x * x;
}
int main()
{
    int num = 4;
    cout << "Square of number = " << square(num) << endl;

    return 0;
}
