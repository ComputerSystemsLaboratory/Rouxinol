#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <math.h>

#define REP(i, n) for (int (i) = 0; (i) < (n); (i)++)

using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
template<class T> using hset = unordered_set<T>;
template<class Key, class T> using hmap = unordered_map<Key, T>;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
bool isOutOfBounds(int y, int x, int h, int w) {
    return y < 0 || y >= h || x < 0 || x >= w;
}

int main() {
    hset<int> prime;
    for (int i=2; i<=1000000; i++) prime.insert(i);
    for (int i=2; i<=1000000; i++) {
        if (prime.find(i) != prime.end()) {
            for (int j=2; i*j<=1000000; j++) prime.erase(i*j);
        }
    }

    int a, d, n;
    while (cin >> a >> d >> n) {
        if (a == 0) break;
        a -= (a == 1) ? 0 : d;
        while (n > 0) {
            a += d;
            if (prime.find(a) != prime.end()) n--;
        }

        cout << a << endl;
    }

    return 0;
}