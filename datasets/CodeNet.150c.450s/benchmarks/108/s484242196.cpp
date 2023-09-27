//
// Created by tattsun on 2017/02/14.
//

#include <iostream>
#include <vector>

#define VERTEX_NUM_MAX 101

using namespace std;
typedef vector<int> Vertex;

int n;
Vertex vs[VERTEX_NUM_MAX];
int ds[VERTEX_NUM_MAX];

void _bfs(vector<int>& targets, int distance) {
    vector<int> next_targets;

    for(auto it = targets.begin(); it != targets.end(); it++) {
        if(ds[*it] == -1) {
            ds[*it] = distance;

            auto& t = vs[*it];
            for(auto itt = t.begin(); itt != t.end(); itt++)
                next_targets.push_back(*itt);
        }
    }

    if(next_targets.empty())
        return;

    _bfs(next_targets, distance+1);
}

void bfs() {
    vector<int> targets;
    targets.push_back(1);

    _bfs(targets, 0);
}

int main() {
    for(int i=0; i<VERTEX_NUM_MAX; i++) {
        ds[i] = -1;
    }

    cin >> n;

    int u, k, p;
    for(int i=1; i<=n; i++) {
        cin >> u >> k;
        for(int j=0; j<k; j++) {
            cin >> p;
            vs[i].push_back(p);
        }
    }

    bfs();

    for(int i=1; i<=n; i++) {
        cout << i << " " << ds[i] << endl;
    }
}