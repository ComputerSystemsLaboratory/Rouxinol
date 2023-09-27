#include "bits/stdc++.h"

using namespace std;

using ll = long long;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int q;
    cin >> q;
    set<string> st;
    while (q--)
    {
        string s;
        cin >> s;
        string str;
        cin >> str;
        if (s == "insert")
        {
            st.insert(str);
        }
        else
        {
            if (st.find(str) == st.end())
            {
                cout << "no" << endl;
            }
            else
            {
                cout << "yes" << endl;
            }
        }
    }
}

