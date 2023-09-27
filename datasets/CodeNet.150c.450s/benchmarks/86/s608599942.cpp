#include "bits/stdc++.h"
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i ++)

int main() {
        int n, m, p;
        while (cin >> n >> m >> p) {
                if (n == 0 && m == 0 && p == 0) break;
                vector<int> x(n);
                double sum = 0;
                rep(i, n) { 
                        cin >> x[i];
                        sum += x[i];
                }
                sum *= 100;
                double s = sum * (double)p / 100.0;
                sum -= s;
                if (x[m - 1] == 0) cout << 0 << endl;
                else cout << (int)(sum / x[m - 1]) << endl;
        }
        return 0;
}