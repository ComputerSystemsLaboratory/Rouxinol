#include <bits/stdc++.h>
#define INF
#define endl '\n'

using namespace std;
void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int n;
string s, s2;
int a[100001];
int dp[1001][1001];

int solve(int a, int b)
{
    //cout << a << " " << b << endl;
    if (a < 0)
        return b+1;
    if (b < 0)
        return a+1;

    int &ret = dp[a][b] ;
    if(~ret)    return ret ; 

    ret = min(solve(a - 1, b) + 1 ,
               min(solve(a, b - 1) +1 ,
                   solve(a - 1, b - 1) + (s[a] != s2[b] ) )) ;
    return ret ; 
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    fast();

    memset(dp, -1, sizeof dp);
    cin>>s>>s2;
    cout << solve(s.length() - 1, s2.length() - 1)<<endl ;

    return 0;
}


