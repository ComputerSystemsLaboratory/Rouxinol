#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define x first
#define y second
#define pii pair<int, int>
#define p3i pair<pii, int>
#define pll pair<ll, ll>
#define p3l pair<pll, ll>
#define lseg L, (L+R)/2, N*2+1
#define rseg (L+R)/2+1, R, N*2+2
#define ub upper_bound
#define lb lower_bound
#define p_q priority_queue
#define MN 1000000009

int n, a, b, c, d;
int main(){
    while(cin >> n){
        if (n==0) return 0;
        c=d=0;
        for (int l=0; l<n; ++l){
            cin >> a >> b;
            if (a>b) c+=a+b;
            else if (b>a) d+=a+b;
            else {c+=a; d+=a;}
        }
        cout << c << ' ' << d << endl;
    }
    return 0;
}