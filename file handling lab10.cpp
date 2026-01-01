#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string filePassword, userPassword; 
    ifstream file("pwd.txt");
	if (!file) {
        cout << "Error: Could not open pwd.txt file." << endl;
        return 1;
    }
    getline(file, filePassword);
    file.close();
    cout << "Enter password: ";
    getline(cin, userPassword);
    if (filePassword == userPassword) {
        cout << "Password Matched Successfully" << endl;
    } else {
        cout << "Invalid Password" << endl;
    }

    return 0;
}
