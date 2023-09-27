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
    int n, m, p, sum, win, tmp;
    while (cin >> n >> m >> p) {
        if (n == 0) break;
        sum = 0;
        for (int i = 1; i <= n; i++) {
            cin >> tmp;
            sum += tmp;
            if (i == m) win = tmp;
        }

        if (win == 0) cout << 0 << endl;
        else cout << (100*sum)*(100-p)/(win*100) << endl;
    }

    return 0;
}