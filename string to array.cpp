#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  // input with spaces also

    int n = str.length();
    char arr[n + 1];  // +1 for null character
    
    // Copy characters into array
    for (int i = 0; i < n; i++) {
        arr[i] = str[i];
    }
    arr[n] = '\0';  // null terminate karna zaroori hai

    // Display each character
    cout << "Characters in array:\n";
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}
