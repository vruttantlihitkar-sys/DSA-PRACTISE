#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int count = 0;
    for (char c : str) {
        if (c == ' ') {
            count++;
        }
    }

    cout << "Number of spaces: " << count << endl;
    return 0;
}
