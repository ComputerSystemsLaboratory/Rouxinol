#include <iostream>
#include <vector>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

int a, b, c;

int f(int x) {
    return (a*x + b) % c;
}

void solve(int n, int x) {
    vector<int> Y(n);
    rep(i,n) cin >> Y[i];

    int p = 0;
    for(int frame=0; ; frame++) {
        if(frame > 1e4) break;
        if(x == Y[p]) p++;
        if(p == n) {
            cout << frame << "\n";
            return ;
        }
        x = f(x);
    }
    cout << -1 << "\n";
    return ;
}

int main() {
    int n, x;
    while(cin>>n>>a>>b>>c>>x && n) solve(n,x);
    return 0;
}