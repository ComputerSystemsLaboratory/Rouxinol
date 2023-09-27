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
    int N, A, B, C, X, Y, f;
    while (cin >> N >> A >> B >> C >> X) {
        f = 0;
        if (N == 0) break;
        for (int i = 0; i < N; i++) {
            if (i > 0) {
                f++;
                X = (A*X + B) % C;
            }

            cin >> Y;
            for (; f <= 10000; f++) {
                if (Y == X) break;
                else X = (A*X + B) % C;
            }
        }
        cout << (f > 10000 ? -1 : f) << endl;
    }

    return 0;
}