#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define VLA valarray<long long>
#define VVLA vector<VLA>
using namespace std;

int main() {
    int n, m, l;
    cin >> n >> m >> l;
    VVLA A(n, VLA(m));
    VVLA B(l, VLA(m));
    REP(i, n) REP(j, m) cin >> A.at(i)[j];
    REP(i, m) REP(j, l) cin >> B.at(j)[i];
    VLA ans(m);
    REP(i, n) REP(j, l) {
        ans = A.at(i) * B.at(j);
        cout << ans.sum();
        j != l-1 ? cout<<" " : cout<<endl;}
}