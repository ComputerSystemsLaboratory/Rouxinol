#include <iostream>
#include <vector>

using namespace std;

int verticisNumber;
vector<int> d, f;
vector< vector<int> > g;

void dfs(int cur) {
    static int time = 0;
    time++;
    d[cur] = time;

    for(int i = 0; i < verticisNumber; i++) {
        if(g[cur][i] && !d[i]) {
            dfs(i);
        }
    }

    time++;
    f[cur] = time;

    return;
}

int main() {
    cin >> verticisNumber;
    d.resize(verticisNumber); f.resize(verticisNumber);
    g.resize(verticisNumber);
    for(auto itr = g.begin(); itr != g.end(); itr++) {
        itr->resize(verticisNumber);
    }

    for(int i = 0; i < verticisNumber; i++) {
        int k, degree;
        cin >> k >> degree;
        for(int j = 0; j < degree; j++) {
            int dst;
            cin >> dst;
            g[i][dst - 1] = 1;
        }
    }

    for(int i = 0; i < verticisNumber; i++) {
        if(!d[i]) {
            dfs(i);
        }
    }

    for(int i = 0; i < verticisNumber; i++) {
        cout << i + 1 << " " << d[i] << " " << f[i] << endl;
    }
    return 0;
}