#include <iostream>
#include <vector>
#define N 100000
#define white 0
using namespace std;

int color[N], n, S[N];
vector<int> c[N];



void tansaku_2(int a, int b) {
    int i, t, co, u;
    S[0] = a;
    t = 0;
    co = 1;
    while (1) {
        u = S[t];
        for (i = 0; i < c[u].size(); ++i) {
            if (color[c[u][i]] == white){
                color[c[u][i]] = b;
                S[co++] = c[u][i];
            }
        }
        S[t++] = 0;
        if (t == co) break;
    }
}

void tansaku() {
    int i, d;
    d = 1;
    
    for (i = 0; i < n; ++i) {
        if (color[i] == white) {
            color[i] = d;
            tansaku_2(i , d++);
        }
    }
}

int main() {
    int m, q, i, a, b;
    
    cin >> n >> m;
    for (i = 0; i < n; ++i) {
        color[i] = white;
    }
    for (i = 0; i < m; ++i) {
        cin >> a >> b;
        c[a].push_back(b);
        c[b].push_back(a);
    }
    tansaku();
    
    cin >> q;
    
    for (i = 0; i < q; ++i) {
        cin >> a >> b;
        if (color[a] == color[b]) {
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
    return 0;
}