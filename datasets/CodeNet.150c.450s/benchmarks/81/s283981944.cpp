#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;
#define MAXN 15
#define INF 1000000000
int K[MAXN][MAXN];
int n;

int main(void) {
    while (1) {
        cin >> n;
        int num = 0;
        if (n == 0) break;
        for (int i = 0; i < MAXN; i++)
            for (int j = 0; j < MAXN; j++)
                K[i][j] = INF;
        for (int i = 0; i < MAXN; i++) K[i][i] = 0;
        for (int i = 0; i < n; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            num = max(num, max(a, b));
            K[a][b] = K[b][a] = c;
        }
        for (int k = 0; k <= num; k++) {
            for (int i = 0; i <= num; i++) {
                for (int j = 0; j <= num; j++) {
                    if (K[i][j] > K[i][k] + K[k][j]) {
                        K[i][j] = K[i][k] + K[k][j];
                    }
                }
            }
        }
//        for (int i = 0; i <= num; i++) {
//            for (int j = 0; j <= num; j++) {
//                cout << K[i][j] << " ";
//            }
//            cout << endl;
//        }
        int ans = INF, index = 0; 
        for (int i = 0; i <= num; i++) {
            int all = 0;
            for (int j = 0; j <= num; j++) {
                all += K[i][j];
            }
            if (all < ans) {
                index = i;
                ans = all;
            }
        }
        cout << index << " " << ans << endl;
    }
    return 0;
}