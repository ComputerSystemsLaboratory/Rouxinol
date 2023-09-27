#include <bits/stdc++.h>
using namespace std;
#define int long long   // <-----!!!!!!!!!!!!!!!!!!!

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int, int> Pii;
typedef tuple<int, int, int> TUPLE;
typedef vector<int> V;
typedef vector<V> VV;
typedef vector<VV> VVV;

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int e;
    while (cin >> e, e) {
        int m = 99999999;
        for (int z = 0; z * z * z <= e; z++) {
            for (int y = 0; y * y + z * z * z <= e; y++) {
                int x = e - (y * y + z * z * z);
                m = min(m, x + y + z);
            }
        }
        cout << m << endl;
    }

}