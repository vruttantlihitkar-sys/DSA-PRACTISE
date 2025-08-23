#include <iostream>
using namespace std;

int main() {
    string fullName;

    cout << "Enter your full name: ";
    getline(cin, fullName);  // pura sentence lega (spaces ke sath)

    cout << "Hello, " << fullName << "!" << endl;

    return 0;
}
