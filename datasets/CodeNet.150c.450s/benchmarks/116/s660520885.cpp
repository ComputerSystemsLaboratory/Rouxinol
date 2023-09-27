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

const int MAXN = 100 * 1000 + 10;

double s[MAXN];
double t;

int main()
{
    int n, k;
    while(cin >> n >> k && n)
    {
        s[0] = 0;
        REP(n){cin >> t; s[i+1] = s[i] + t;}
        double ans = 0;
        for(int i = 0;i + k < n;i++){ ans = max(ans, s[i+k] - s[i]);}

        printf("%d\n", (long long)ans);
    }

    return 0;
}