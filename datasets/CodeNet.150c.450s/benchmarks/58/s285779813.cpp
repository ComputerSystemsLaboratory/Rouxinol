#include <bits/stdc++.h>
using namespace std;
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return 1;
    }
    return 0;
}
typedef long long int ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MOD (1000000007)
#define ALL(v) (v).begin(), (v).end()
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
    string x;
    stack<int> st;
    while (cin >> x)
    {
        if (x == "+")
        {
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            st.push(first + second);
        }
        else if (x == "-")
        {
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            st.push(second - first);
        }
        else if (x == "*")
        {
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            st.push(first * second);
        }
        else
        {
            st.push(atoi(x.c_str()));
        }
    }
    cout << st.top() << endl;
    return 0;
}
