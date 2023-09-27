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
#include <climits>
using namespace std;
#define INF 100000000
typedef long long ll;

int main(void) {
    int n, m;
    while (1) {
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        int sumn = 0, summ = 0;
        int t[n], h[m];
        for (int i = 0; i < n; i++) {
            cin >> t[i];
            sumn += t[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> h[i];
            summ += h[i];
        }
        bool flag = false;
        int anst = INF, ansh = INF;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (sumn-t[i]+h[j] == summ-h[j]+t[i]) {
                    flag = true;
                    if (anst+ansh > h[j] + t[i]) {
                        anst = t[i], ansh = h[j];
                    }
                }
            }
        }
        if (!flag) cout << -1 << endl;
        else cout << anst << " " << ansh << endl;
    }
    return 0;
}