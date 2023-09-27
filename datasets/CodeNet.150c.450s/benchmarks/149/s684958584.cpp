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

int u[10010];

int main() {
    for(int i = 0;i < 10010;i++) u[i] = -1;
    int n,q,x,y,com;
    cin >> n >> q;
    for(int i = 0;i < q;i++) {
        cin >> com >> x >> y;
        if(com) {
            int c[2] = {x,y};
            while(u[c[0]] != -1) c[0] = u[c[0]];
            while(u[c[1]] != -1) c[1] = u[c[1]];
            if(c[0] == c[1]) cout << 1 << endl;
            else cout << 0 << endl;
        } else {
            int c[2] = {x,y};
            while(u[c[0]] != -1) c[0] = u[c[0]];
            while(u[c[1]] != -1) c[1] = u[c[1]];
            if(c[0] != c[1]) u[c[1]] = c[0];
        }
    }
}

