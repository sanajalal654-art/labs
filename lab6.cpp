#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    float gpa;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your GPA: ";
    cin >> gpa;

    cout << "\nYour Name is: " << name << endl;
    cout << "Your GPA is: " << gpa << endl;

    return 0;
}