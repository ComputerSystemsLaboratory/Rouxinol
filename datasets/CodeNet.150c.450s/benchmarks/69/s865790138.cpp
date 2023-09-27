#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define foreach(itr,a) for(__typeof((a).begin()) itr=(a).begin(); itr!=(a).end(); itr++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

int a[11];

void dfs(int depth, int l, int r) {
    if(depth == 10) {
        cout << "YES" << endl;
        return ;
    }

    int t = a[depth];
    if(l < t)
        dfs(depth+1, t, r);
    else if(r < t)
        dfs(depth+1, l, t);
    else
        cout << "NO" << endl;

    return ;
}

int main() {
    int n; cin >> n;
    rep(poyo,n) {
        rep(i,10) cin >> a[i];
        dfs(0,0,0);
    } 

    return 0;
}