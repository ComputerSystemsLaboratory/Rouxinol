#include <bits/stdc++.h>

using namespace std;
using LL = long long;
using P = pair<int, int>;
using Tapris = tuple<int, int, int>;

#define REP(i, n) for(LL i = 0; i < n; ++i)
#define FOR(i, a, n) for(LL i = a; i < n; ++i)
#define pb(a) push_back(a)
#define all(x) (x).begin(),(x).end()

const int INF = (int)1e9;
const LL INFL = (LL)1e15;
const int MOD = 1e9 + 7;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

//#define int long long

/*************** using variables ***************/
int e;
int m = INF;
/**********************************************/

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    while(cin >> e, e){
        m = INF;
        for(int z = 0; z*z*z <= e; z++){
            for(int y = 0; y*y <= e-z*z*z; y++){
                int x = e - y*y - z*z*z;
                if(x+y*y+z*z*z == e){
                    //cout << x << " " << y << " " << z << endl;
                    m = min(m, x+y+z);
                }
            }
        }

        cout << m << endl;
    }
}

