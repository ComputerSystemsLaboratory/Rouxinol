#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

inline bool isOperator(char c) {
    return (c == '+') || (c == '-') || (c == '*') || (c == '/');
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    getline(cin, s);
    s += " ";
    const int n = s.size();
    int idx = 0;
    stack<int> st;

    while (idx < n) {
        int nxt_idx = idx + 1;
        while (nxt_idx < n && s[nxt_idx] != ' ')
            ++nxt_idx;

        if (nxt_idx - idx == 1 && isOperator(s[idx])) {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();

            if (s[idx] == '+')
                st.push(b + a);
            else if (s[idx] == '-')
                st.push(b - a);
            else if (s[idx] == '*')
                st.push(b * a);
            else if (s[idx] == '/')
                st.push(b / a);
        }
        else {
            int elem = stoi(s.substr(idx, nxt_idx - idx));
            st.push(elem);
        }

        idx = nxt_idx + 1;
    }

    cout << st.top() << endl;

    return 0;
}