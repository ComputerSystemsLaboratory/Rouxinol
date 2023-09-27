#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
template<class T> using hset = unordered_set<T>;
template<class Key, class T> using hmap = unordered_map<Key, T>;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int main() {
    int n, m;
    vi s(200);
    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;

        int nsum = 0, msum = 0;
        for (int i=0; i<n; i++) {
            cin >> s[i];
            nsum += s[i];
        }
        for (int i=n; i<n+m; i++) {
            cin >> s[i];
            msum += s[i];
        }

        bool flg = false;
        for (int i=0; i<n; i++) {
            if ((msum - nsum) % 2 == 1) break;
            for (int j=n; j<n+m; j++) {
                if ((s[i]-s[j]) * 2 == nsum - msum) {
                    cout << s[i] << " " << s[j] << endl;
                    flg = true;
                    break;
                }
            }
            if (flg) break;
        }
        if (!flg) cout << -1 << endl;
    }

    return 0;
}