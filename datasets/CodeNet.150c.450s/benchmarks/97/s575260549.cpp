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

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

class xy {
    private:
        static int max_x, min_x, max_y, min_y;

    public:
        int x, y;

        void set(int _x, int _y) {
            x = _x; y = _y;
            max_x = x > max_x ? x : max_x;
            min_x = x < min_x ? x : min_x;
            max_y = y > max_y ? y : max_y;
            min_y = y < min_y ? y : min_y;
        }
        static void reset() {
            max_x = 0; min_x = 0; max_y = 0; min_y = 0;
        }
        static int width() { return (max_x - min_x) + 1; }
        static int height() { return (max_y - min_y) + 1; }
};
int xy::max_x = 0;
int xy::min_x = 0;
int xy::max_y = 0;
int xy::min_y = 0;

int main() {
    while (true) {
        int N; cin >> N;
        if (N == 0) break;

        xy::reset();
        vector<xy> sq(N);
        for (int i=1; i<N; i++) {
            int n, d; cin >> n >> d;
            sq[i].set(sq[n].x+dx[d], sq[n].y+dy[d]);
        }

        cout << xy::width() << " " << xy::height() << endl;
    }

    return 0;
}