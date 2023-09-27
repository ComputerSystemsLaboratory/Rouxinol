#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>

#define REP(i, n) for (int (i)=0; (i)<(n); (i)++)
#define SET(n, v) \
    do { \
        (v).resize(n); \
        REP(i, (n)) cin >> (v)[i]; \
    } while (false)

using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
template<class T> using hset = unordered_set<T>;
template<class Key, class T> using hmap = unordered_map<Key, T>;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int main() {
    string oc[2] = {"Opened by ", "Closed by "};
    int N, M;
    hset<string> uid;

    string s;
    cin >> N;
    REP(i, N) {
        cin >> s;
        uid.insert(s);
    }

    int k=0;
    cin >> M;
    REP(i, M) {
        cin >> s;
        if (uid.find(s) == uid.end()) {
            cout << "Unknown " << s << endl;
        } else {
            cout << oc[k] << s << endl;
            k = (k+1) % 2;
        }
    }

    return 0;
}