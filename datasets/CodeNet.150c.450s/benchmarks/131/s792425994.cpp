#include "bits/stdc++.h"
using namespace std;

int main() {
        int i, j;
        while (true) {
                string a;
                int l;
                cin >> a >> l;
                if (a == "0" && l == 0) break;
                int index = 1;
                map<int, int> s;
                s[stoi(a)] = 0;
                string A(l, '0');
                for (i = 0; i < a.size(); i ++) {
                        A[i] = a[i];
                }
                int indexi, indexj, ans;
                while (true) {
                        sort(A.begin(), A.end());
                        int x = stoi(A);
                        reverse(A.begin(), A.end());
                        int y = stoi(A);
                        int diff = y - x;
                        if (s.count(diff)) {
                                indexi = index;
                                indexj = s[diff];
                                ans = diff;
                                break;
                        }
                        s[diff] = index;
                        A = to_string(diff);
                        A.resize(l, '0');
                        index ++;
                }
                cout << indexj << ' ' << ans << ' ' << indexi - indexj << endl;
        }
        return 0;
}