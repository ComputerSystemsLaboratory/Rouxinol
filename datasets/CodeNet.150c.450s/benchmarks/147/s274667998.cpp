#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = 1001001001;
const ll LINF = 1001001001001001;
const int MOD = 1000000007;

template <typename T>
void print(const T &v);

int main()
{
    int n;
    cin >> n;
    vector<int> cnts(n + 1);
    int cnt = 0;
    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; j <= 100; j++)
        {
            for (int k = 1; k <= 100; k++)
            {
                int num = i * i + j * j + k * k + i * j + j * k + k * i;
                if (num <= n)
                {
                    ++cnts[num - 1];
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << cnts[i] << endl;
    }
    return 0;
}

// Use For Debug
template <typename T>
void print(T const &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (i)
            cout << ' ';
        cout << v[i];
    }
    cout << endl;
}