#include "bits/stdc++.h"
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
 
#define FOR(i, s, e) for (int(i) = (s); (i) < (e); (i)++)
#define debug(x) cout << #x << ": " << x << endl
#define ALL(x) (x).begin(),(x).end()
 
const int INF = 1e9;
const ll LINF = 1e16;
 
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
 
    int H;
    int c = 0;
    while (1) {
        cin >> H;
        if (H == 0) break;
        vector<vector<int>> yama(H + 2, vector<int>(7, INF));
        for (int i = H; i >= 1; i--) {
            for (int j = 1; j <= 5; j++) {
                cin >> yama[i][j];
            }
        }
        //cout << "hello" << endl;
        int ret = 0;
        bool f = false;
        do {
 
            f = false;
            for (int i = 1; i <= H; i++) {
                int count = 0;
                int n = -1;
                for (int j = 1; j <= 6; j++) {
                    if (yama[i][j] != n) {
                        if (count >= 3) {
                            if (n != INF) {
                                ret += (count*n);
                                f = true;
                                for (int k = j - count; k < j; k++) {
                                    yama[i][k] = INF;
                                }
                            }
                            break;
                        }
                        count = 1;
                        n = yama[i][j];
                    }
                    else {
                        count++;
                    }
                }
            }
         
 
            for (int i = 1; i <= H; i++) {
                for (int j = 1; j <= 5; j++) {
                    if (yama[i][j] == INF) {
                        for (int k = i + 1; k <= H; k++) {
                            if (yama[k][j] != INF) {
                                yama[i][j] = yama[k][j];
                                yama[k][j] = INF;
                                break;
                            }
                        }
                    }
                }
            }
 
        } while (f);
        cout << ret << endl;
        c++;
    }
 
    return 0;
}