#include <iostream>
#include <cstdio>
#include <vector>
#include <numeric>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()

void solve(int n, int m) {
    vector<int> c1(n), c2(m);
    rep(i,n) cin >> c1[i];
    rep(i,m) cin >> c2[i];

    rep(i,n) rep(j,m) {
        swap(c1[i], c2[j]);
        int sum1 = accumulate(ALL(c1), 0);
        int sum2 = accumulate(ALL(c2), 0);
        swap(c1[i], c2[j]);
        if(sum1 == sum2) {
            printf("%d %d\n", c1[i], c2[j]);
            return ;
        }
    }

    puts("-1");
    return ;
}

int main() {
    int n, m;
    while(cin>>n>>m && n) solve(n,m);

    return 0;
}