#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);   // input lete waqt space bhi lega

    // replace spaces with '_'
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            str[i] = '_';
        }
    }

    cout << "After replacing spaces: " << str << endl;

    return 0;
}
