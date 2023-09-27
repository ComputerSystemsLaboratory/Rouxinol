#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>

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
    int n, cnt;
    string s0, s1;
    while (cin >> n) {
        if (n == 0) continue;

        cnt = 0;
        cin >> s1;
        for (int i=1; i<n; i++) {
            cin >> s0;
            if ((s0[1] == s1[1]) && (s0[0] != s1[0])) cnt++;
            s1 = s0;
        }

        cout << cnt << endl;
    }

    return 0;
}