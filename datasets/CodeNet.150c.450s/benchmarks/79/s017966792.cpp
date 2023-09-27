#include "bits/stdc++.h"
using namespace std;

int main() {
        int i, j;
        int n, r;
        while (cin >> n >> r) {
                if (n == 0 && r == 0) break;
                vector<int> a(n);
                vector<bool> ok(n);
                for (i = 0; i < n; i ++) {
                        a[i] = i + 1;
                        ok[i] = true;
                }
                for (i = 0; i < r; i ++) {
                        int p, c;
                        cin >> p >> c;
                        int cnt = 0;
                        int pp = a.size() - 1;
                        while (cnt < p - 1) {
                                if (ok[pp]) cnt ++;
                                pp --;
                        }
                        cnt = 0;
                        vector<int> tmp;
                        vector<bool> tmpok;
                        while (cnt < c) {
                                if (ok[pp]) {
                                        cnt ++;
                                        ok[pp] = false;
                                        tmp.push_back(a[pp]);
                                        tmpok.push_back(true);
                                }
                                pp --;
                        }
                        for (j = tmp.size() - 1; j >= 0; j --) a.push_back(tmp[j]);
                        for (j = tmpok.size() - 1; j >= 0; j --) ok.push_back(tmpok[j]);
                        //cout << "================" << endl;
                        //for (j = 0; j < a.size(); j ++) {
                        //        cout << a[j] << ' ' << endl;
                        //}
                }
                cout << a.back() << endl;
        }
        return 0;
}