#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define ZERO(a) memset(a,0,sizeof(a))

int n,m;
int A[111][111];
int b[111];

int main() {
    cin >> n >> m;
    ZERO(A); ZERO(b);
    rep(i,n) rep(j,m) cin >> A[i][j];
    rep(i,m) cin >> b[i];

    rep(i,n) {
        int c = 0;
        rep(j,m) c += A[i][j] * b[j];
        cout << c << endl;
    }

    return 0;
}