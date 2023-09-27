#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
using namespace std;

int main()
{   
    stack<int> st;
    string s;

    while (cin >> s && !cin.eof()) {
        int a, b;

        if (s[0] == '+') {
            b = st.top();
            st.pop();
            a = st.top();
            st.pop();

            st.push(a+b);
        }

        else if (s[0] == '-') {
            b = st.top();
            st.pop();
            a = st.top();
            st.pop();

            st.push(a-b);
        }

        else if (s[0] == '*') {
            b = st.top();
            st.pop();
            a = st.top();
            st.pop();

            st.push(a*b);
        }

        else {
            st.push(stoi(s));

        }
            
    }

    cout << st.top() << endl;

}
