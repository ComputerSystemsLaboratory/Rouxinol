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

int days(int y, int m) {
    return (y % 3 == 0 || m % 2 == 1) ? 20 : 19;
}

int main() {
    int n, y, m, d, ans; cin >> n;
    for (int i=0; i<n; i++) {
        cin >> y >> m >> d;

        ans = days(y, m++) - d + 1;
        if (m > 10) { y++; m = 1; }

        while (y != 1000 || m != 1) {
            ans += days(y, m++);
            if (m > 10) { y++; m = 1; }
        }

        cout << ans << endl;
    }
    return 0;
}