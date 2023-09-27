#include <iostream>
#include <string>
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

int dy[] = {1, 0, -1, 0};
int dx[] = {0, 1, 0, -1};

int main() {
    int m; cin >> m;

    for (int _=0; _<m; _++) {
        hset<string> hs;
        string s; cin >> s;
        hs.insert(s);
        for (int i=1; i<=s.size()-1; i++) {
            for (int j=0; j<8; j++) {
                string s1, s2;
                if ((j>>2) % 2 == 0) {
                    s1 = s.substr(0, i);
                    s2 = s.substr(i);
                } else {
                    s1 = s.substr(i);
                    s2 = s.substr(0, i);
                }
                if ((j>>1) % 2 != 0) reverse(s1.begin(), s1.end());
                if ((j>>0) % 2 != 0) reverse(s2.begin(), s2.end());

                hs.insert(s1+s2);
            }
        }
        cout << hs.size() << endl;
    }

    return 0;
}