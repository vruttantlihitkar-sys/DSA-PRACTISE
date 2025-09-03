#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int count[26] = {0};  // For a-z

    for (char ch : str) {
        if (isalpha(ch)) {  // check alphabet
            ch = tolower(ch); // convert to lowercase
            count[ch - 'a']++;
        }
    }

    // Print result
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            cout << char(i + 'a') << " : " << count[i] << endl;
        }
    }

    return 0;
}
