#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
const long long INF = 1LL<<60; // 仮想的な無限大の値;
using namespace std;
using ll = long long;
using P  = pair<int, int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

string x[] { "AC", "WA", "TLE", "RE" };
int main()
{
    int N;
    cin >> N;
    int C[4] {0};
    rep(i, N)
    {
        string s;
        cin >> s;
        rep(j, 4)
        {
            if(s == x[j])
            {
                C[j]++;
            }
        }
    }
    rep(i, 4) cout << x[i] << " x " << C[i] << endl;
    return 0;
}