#include <iostream>
#include <string>
using namespace std;

// Function to check if substring is palindrome
bool isPalindrome(const string &s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
}

// Function to find longest palindrome substring
string longestPalindrome(string s) {
    int n = s.size();
    string result = "";
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isPalindrome(s, i, j)) {
                if (j - i + 1 > result.size()) {
                    result = s.substr(i, j - i + 1);
                }
            }
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string ans = longestPalindrome(str);
    cout << "Longest Palindromic Substring: " << ans << endl;

    return 0;
}
