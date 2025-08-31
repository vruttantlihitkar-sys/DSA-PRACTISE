#include <iostream>
#include <stack>
#include <string>
using namespace std;

int longestValidParentheses(string s) {
    stack<int> st;
    st.push(-1); // Base for the first valid substring
    int maxLen = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            st.pop();
            if (st.empty()) {
                st.push(i);
            } else {
                maxLen = max(maxLen, i - st.top());
            }
        }
    }
    return maxLen;
}

int main() {
    string s;
    cout << "Enter a parentheses string: ";
    cin >> s;
    int result = longestValidParentheses(s);
    cout << "Length of longest valid parentheses substring: " << result << endl;
    return 0;
}
