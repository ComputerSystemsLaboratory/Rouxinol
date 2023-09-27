#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll inf = (1 << 30) - 1;
const ll infll = (1LL << 61) - 1;

int N, M;
set<string> st;
bool mp;
string s;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        st.insert(s);
    }
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> s;
        if (st.find(s) != st.end())
        {
            mp = !mp;
            cout << (mp ? "Opened " : "Closed ") << "by " + s << endl;
        }
        else
        {
            cout << "Unknown " + s << endl;
        }
    }
}
