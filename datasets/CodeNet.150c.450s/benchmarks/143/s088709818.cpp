#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define LL long long
using namespace std;
const int N = 1e5 +10 ;
int n,q;
int a[N] ;
map <int,int> mp ;
LL sum = 0 ;
int main()
{
    ios::sync_with_stdio(0) ;
    cin.tie(0) ; cout.tie(0) ;
    //freopen("ch.inp","r",stdin) ;
    cin >> n ;
    FOR(i,1,n) cin >> a[i] ,sum += a[i] , mp[a[i]]++;
    cin >> q;
    FOR(i,1,q)
    {
        int x,y;
        cin >> x >> y ;
        sum += (y-x)*mp[x] ;
        mp[y] += mp[x] ;
        mp[x] = 0;
        cout << sum <<'\n';
    }

}
