#include<iostream>
#include<vector>
#include<queue>
using namespace std;
enum COLOR{WHITE, BLACK};

struct Edge{
    int w;
    int i;
    int j;
    Edge(int w_, int i_, int j_) : w(w_), i(i_), j(j_) {}
    bool operator< (const Edge& right) const{
        return w > right.w;
    }
};

int main(){
    int n;
    cin >> n;
    vector<vector<int> > G(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> G[i][j];
            if (G[i][j] == -1) G[i][j] = 1e8;
        }
    }
    vector<COLOR> state(n, WHITE);
    priority_queue<Edge> prim;
    state[0] = BLACK;
    int sum = 0;
    int idx_new_gray = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (state[j] != WHITE) continue;
            prim.push(Edge(G[idx_new_gray][j], idx_new_gray, j));
        }
        while (state[prim.top().j] == BLACK) prim.pop();
        sum += G[prim.top().i][prim.top().j];
        state[prim.top().j] = BLACK;
        idx_new_gray = prim.top().j;
        prim.pop();
    }
    cout << sum << endl;
    return 0;
}

