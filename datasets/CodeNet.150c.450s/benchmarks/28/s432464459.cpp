#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
 
using namespace std;
 
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)   FOR(i,0,n)
#define ll long long

#define MAX_N 1000000
#define MAX_W 10000

int check(int w[MAX_N], int n, int k, ll p)
{
    int i = 0;
    REP(j, k)
    {
        ll sum = 0;
        for(; sum + w[i] < p; i++)
        {
            sum += w[i];
        }
    }
    return i;
}

int main()
{
    int n, k, w[MAX_N];
    cin >> n >> k;
    REP(i, n) cin >> w[i];

    ll r = n * MAX_W;
    ll l = 0;
    while(r - l > 0)
    {
        ll mid = (l + r)/2;
        int v = check(w, n, k, mid);
        if(v >= n) r = mid;
        else l = mid + 1;
    }
    cout << l - 1 << endl;
}