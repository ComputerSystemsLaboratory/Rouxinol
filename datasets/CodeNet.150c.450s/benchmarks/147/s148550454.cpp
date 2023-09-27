#ifndef CLion
//#pragma GCC optimize ("O3")
#endif

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>

#define F first
#define S second
#define pb push_back
#define ll long long
#define all(x) x.begin() , x.end()
#define mod(x,m) ((x%m + m)%m)
#define rep(i,s,e) for (int i = s; i < e; ++i)
#define mem(a,v) memset(a , v , sizeof a)
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
        tree_order_statistics_node_update>;

const int N = 1e4 + 9 , base = 26;

int solve( int n ){
    int cnt = 0;
    rep(x,1,n+1){
        int a = x*x;
        if (a > n) break;
        rep(y,x,n+1){
            int b = a + y*y + x*y;
            if ( b > n ) break;
            rep(z,y,n+1){
                int c = b + z*z + y*z + x*z;
                if ( c > n ) break;
                if ( c < n ) continue;
                if ( x == z ) ++cnt;
                else if ( x == y || y == z ) cnt += 3;
                else cnt += 6;
            }
        }
    }
    return cnt;
}
void Main(int cse , bool last){
    //cout << f(1,1,2) ; exit(0);
    //cout << solve(11); exit(0);
    int n ; cin >> n;
    rep(i,1,n + 1) cout << solve(i) << "\n";
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef CLion
    freopen( "in.txt" , "r" , stdin  );
    //freopen( "out.txt", "w" , stdout );
#endif

    int t = 1;
    //cin >> t;
    for ( int cse = 1; cse <= t; ++cse ) Main(cse, cse == t);
    return 0;
}
