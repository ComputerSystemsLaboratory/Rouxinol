#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    stack<int> st;

    while (cin >> s) {
        int a, b;
        if (s[0] == '+') {
            a = st.top(); st.pop();
            b = st.top(); st.pop();
            st.push(b + a);
        }
        else if (s[0] == '-') {
            a = st.top(); st.pop();
            b = st.top(); st.pop();
            st.push(b - a);
        }
        else if (s[0] == '*') {
            a = st.top(); st.pop();
            b = st.top(); st.pop();
            st.push(b * a);
        }
        else
            st.push(stoi(s));
    }

    cout << st.top() << endl;

    return 0;
}