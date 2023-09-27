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
    vi v(1000, 0);
    for (int i = 1; i < 1000; i++) v[i] = v[i-1] + i;

    int N, cnt;
    while (cin >> N) {
        if (N == 0) break;
        cnt = 0;
        for (int i = 0; i < v.size(); i++) {
            for (int j = i + 2; j < v.size(); j++) {
                if (v[j] - v[i] < N) continue;
                if (v[j] - v[i] == N) cnt++;
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}