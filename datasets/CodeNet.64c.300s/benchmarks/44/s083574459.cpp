#include <iostream>
using namespace std;

#define rep(i, n) for(int i = 0;i < (int)n;i++)

const int INF = 100001;

int d[100][100];

int main() {
    while(true) {
        int n;
        cin >> n;
        if(!n) break;

        rep(i, 10) {
            rep(j, 10) {
                d[i][j] = (i != j ? INF : 0);
            }
        }

        int m = 0;

        rep(i, n) {
            int a, b, cost;
            cin >> a >> b >> cost;
            m = max(m, max(a, b));
            d[a][b] = d[b][a] = cost;
        }

        m++;

        rep(i, m) {
            rep(j, m) {
                rep(k, m) {
                    d[j][k] = min(d[j][k], d[j][i] + d[i][k]);
                }
            }
        }

        int ansd = 10000000, ansi;
        rep(i, m) {
            int sum = 0;
            rep(j, m) {
                sum += d[i][j];
            }
            if(sum < ansd) {
                ansd = sum;
                ansi = i;
            }
        }
        cout << ansi << ' ' << ansd << endl;
    }

    return 0;
}