#include <bits/stdc++.h>

using namespace std;

int evaluatePostfixExpression(string expression) {
    stack<int> st;
    for (int i = 0; i < expression.length(); i++){
        char c = expression[i];
        if (c >= '0' && c <= '9'){
            int temp = (int)(c - '0');
            st.push(temp);
        }
        else{
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            switch(c){
                case '+':
                    st.push(op2 + op1);
                    break;
                case '-':
                    st.push(op2 - op1);
                    break;
                case '*':
                    st.push(op2 * op1);
                    break;    
                case '/':
                    st.push(op2 / op1);
                    break;
            }
        }
    }
    return st.top();
}

int main() {
    string expression = "23*45+*";
    cout << evaluatePostfixExpression(expression) << endl;
    return 0;
}
