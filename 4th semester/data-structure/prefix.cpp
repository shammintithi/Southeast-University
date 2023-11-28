#include <bits/stdc++.h>
using namespace std;

// Function to return precedence of operators
int prec(char c){
  if (c == '^') return 3;
  else if (c == '/'  c == '*') return 2;
  else if (c == '+'  c == '-') return 1;
  else return -1;
}

// Function to convert infix expression to postfix expression
void infixToPostfix(string s){
    stack<char> st;
  string result;

    // Scan all characters one by one
  for (int i = 0; i < s.length(); i++) {
    char c = s[i];

        // If the scanned character is an operand, add it to output string.
    if ((c >= 'a' && c <= 'z')  (c >= 'A' && c <= 'Z')  (c >= '0' && c <= '9')) result += c;
    else if (c == '(') st.push('(');
    else if (c == ')') {
      while (st.top() != '(') {
        result += st.top();
        st.pop();
      }
      st.pop();
    }else{
            // If an operator is encountered
      while(!st.empty()
        && prec(s[i]) <= prec(st.top())) {
        result += st.top();
        st.pop();
      }
      st.push(c);
    }
  }
    // Pop all the remaining elements from the stack
    while(!st.empty()) {
    result += st.top();
    st.pop();
  }

  cout << "Postfix: " << result << endl;
}

void infixToPrefix(string s){
    stack<char> st;
    string result;

    // Reverse the infix expression
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        // If the scanned character is an operand, add it to output string.
        if ((c >= 'a' && c <= 'z')  (c >= 'A' && c <= 'Z')  (c >= '0' && c <= '9')) result += c;
        else if (c == '(') st.push('(');
        else if (c == ')') {
            while (st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        }else{
            // If an operator is encountered
            while(!st.empty()
                && prec(s[i]) < prec(st.top())) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    // Pop all the remaining elements from the stack
    while(!st.empty()) {
        result += st.top();
        st.pop();
    }

    // Reverse the result
    reverse(result.begin(), result.end());
    cout << "Prefix: " << result << endl;
}

int main(){
    // testing code
    // string s = "ab*c+";
    // string s = "a+b*(c^d-e)^(f+g*h)-i";

    string s;
    cin >> s;

    infixToPostfix(s);
    infixToPrefix(s);
}