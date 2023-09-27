#include<bits/stdc++.h>
using namespace std;
#define INF = 2e9
#define LINF = 1e18
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
#define all(x) (x).begin(),(x).end()
#define dump(x) cout << #x << "=" << (x) << endl
#define YES(n) cout << ((n) ? "YES" : "NO")
#define Yes(n) cout << ((n) ? "Yes" : "No")

int main(){

    int n,m,l;
    cin >> n >> m >> l;

    int a[100][100], b[100][100];

    rep(i,n){
        rep(j,m){
            cin >> a[i][j];
        }
    }

    rep(j, m){
        rep(k, l){
            cin >> b[j][k];
        }
    }

    rep(i, n){
        rep(j, l){
            long long out = 0;
            rep(k, m){
                out += a[i][k]*b[k][j];
            }
            if(j != 0)cout << " ";
            cout << out;
        }
        cout << endl;
    }

}
