#include <iostream>
using namespace std;
int main() {
    int totalSeconds;
    int hours, minutes, seconds;

    cout << "Enter total number of seconds: ";
    cin >> totalSeconds;

    hours = totalSeconds / 3600;          
    totalSeconds = totalSeconds % 3600;   

    minutes = totalSeconds / 60;         
    seconds = totalSeconds % 60;         
  
    cout << hours << " hrs ";
    cout<< minutes << " mins ";
    cout<< seconds << " secs" << endl;

    return 0;
}