#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <math.h>

using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using vc = vector<char>;
using vvc = vector<vc>;
template<class T> using hset = unordered_set<T>;
template<class Key, class T> using hmap = unordered_map<Key, T>;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int main() {
    int n, min;
    vi a;
    while (cin >> n) {
        if (n == 0) break;

        min = 1e9;
        a.resize(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        for (int i = 1; i < n; i++) {
            min = (a[i] - a[i-1] < min) ? a[i] - a[i-1] : min;
        }

        cout << min << endl;
    }

    return 0;
}