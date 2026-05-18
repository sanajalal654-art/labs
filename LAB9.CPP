#include <iostream>
#include <fstream>
using namespace std;

int main() {

    string name;
    int age;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    ofstream fout("record.txt", ios::app);

    fout << name << " " << age << endl;

    fout.close();

    cout << "Record added successfully.";

    return 0;
}