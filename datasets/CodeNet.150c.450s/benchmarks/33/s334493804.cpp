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

int tax(int p, int x) { return p*(100+x)/100; }

int max_sum(int x, int y, int s) {
    int i = 1, j = s-1, tmp, max = 0;

    for (; i <= j; i++) {
        while (tax(i, x) + tax(j, x) > s) j--;
        if (tax(i, x) + tax(j, x) == s) {
            tmp = tax(i, y) + tax(j, y);
            max = tmp > max ? tmp : max;
        }
    }

    return max;
}

int main() {
    int x, y, s;

    while (cin >> x >> y >> s) {
        if (x == 0 && y == 0 && s == 0) break;
        cout << max_sum(x, y, s) << endl;
    }

    return 0;
}