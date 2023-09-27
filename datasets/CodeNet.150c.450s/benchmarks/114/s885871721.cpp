#include <iostream>
#include <set>
#include <vector>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>

using namespace std;

typedef long long signed int ll;

constexpr ll NIL = -20000000000;

int n,z[100][100];
set <int> t;

int main() {
    cin >> n;
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) {
            cin >> z[i][j];
            if(z[i][j] == -1) z[i][j] = 100000;
        }
    }
    int res = 0;
    t.insert(0);
    while(t.size() != n) {
        int me = 100000;int mi = -1;
        for(auto e:t) {
            for(int i = 0;i < n;i++) {
                if(me > z[e][i] && t.find(i) == t.end()) {
                    me = z[e][i];
                    mi = i;
                }
            }
        }
        res += me;
        t.insert(mi);
    }
    cout << res << endl;
}

