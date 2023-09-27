#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<cstring>
#include<cstdio>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)
#define all(n) n.begin(),n.end()
typedef long long ll;

const int MAXN = 101;

ll x[MAXN];

int main()
{
    int n , m, p;
    while(cin >> n >> m >> p && n)
    {
        ll sum = 0;
        m--;
        REP(n) { cin >> x[i]; sum += x[i] ;}

        ll ans = 0;
        
        if(x[m] != 0) ans = (100 - p) * sum / x[m];
        cout << ans << endl;
    }

    return 0;
}