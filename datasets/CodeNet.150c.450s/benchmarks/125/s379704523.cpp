#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> d(101, -1), f(101, -1);
vector<vector<int> > c;

int n, u, k, v;
int dfs(int node, int time) {
    d[node] = time;
    for(int i=0; i<n; ++i) {
        if(c[node][i]==1&&d[i]==-1) time = dfs(i, time+1);
    }
    time++;
    f[node] = time;
    return time;
}

int main() {
    cin >> n;
    for(int i=0; i<n; ++i) {
        cin >> u >> k;
        vector<int> tmp(100, 0);
        for(int j=0; j<k; ++j) {
            cin >> v;
            tmp[v-1] = 1;
        }
        c.push_back(tmp);
    }

    bool isFinished = false;
    int node = 0;
    int time = 0;
    while(isFinished==false) {
        time++;
        time = dfs(node, time);
        isFinished = true;
        for(node=0; node<n; node++) {
            if(d[node]==-1) {
                isFinished=false;
                break;
            }
        }
    }
    for(int i=0; i<n; ++i) {
        cout << i+1 << " " << d[i] << " " << f[i] << endl;
    }
    return 0;
}