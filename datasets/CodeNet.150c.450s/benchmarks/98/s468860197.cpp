#include "bits/stdc++.h"
using namespace std;

static const int INF = 0x3f3f3f3f;

int main() {
        int i, j;
        while (true) {
                int n, m;
                cin >> n >> m;
                if (n == 0 && m == 0) break;
                vector<int> a(n), b(m);
                int asum = 0, bsum = 0;
                for (i = 0; i < n; i ++) { 
                        cin >> a[i];
                        asum += a[i];
                }
                for (i = 0; i < m; i ++) { 
                        cin >> b[i];
                        bsum += b[i];
                }
                int diff = asum - bsum;
                bool f = true;
                if (abs(diff) & 1) f = false;
                int d = diff / 2;
                int s = INF;
                int ansA = -1;
                int ansB = -1;
                for (i = 0; i < a.size(); i ++) {
                        for (j = 0; j < b.size(); j ++) {
                                if (a[i] - b[j] == d) {
                                        if (a[i] + b[j] < s) {
                                                s = a[i] + b[j];
                                                ansA = a[i];
                                                ansB = b[j];
                                        }
                                }
                        }
                }
                if (ansA == -1 || !f) cout << -1 << endl;
                else cout << ansA << ' ' << ansB << endl;
        }
        return 0;
}