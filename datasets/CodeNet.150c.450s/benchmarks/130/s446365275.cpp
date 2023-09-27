#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    valarray<int> b(0, m);
    vector<valarray<int> > A(n, b);
    REP(i,n) {
        REP(j,m) cin >> A.at(i)[j];
    }
    REP(i,m) cin >> b[i];
    REP(i,n){
        valarray<int> c(m);
        c = A.at(i) * b;
        cout << c.sum() << endl;
    }

    return 0;
}