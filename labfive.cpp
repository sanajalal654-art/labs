#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Total characters: " << str.length();
    return 0;
}
 