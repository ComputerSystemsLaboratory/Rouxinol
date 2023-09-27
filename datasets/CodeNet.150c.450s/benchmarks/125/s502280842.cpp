#include<iostream>
#include<vector>
#include<utility>
using namespace std;

void DFS(vector<vector<int> >& G,
        vector<pair<int, int> >& rec, int i) {
    if (rec[i].first != -1) return;
    static int t = 1;
    rec[i].first = t++;
    for (int j = 1; j <= G[i].size(); j++) {
        if (G[i][j]) DFS(G, rec, j);
    }
    rec[i].second = t++;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> > G(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; i++) {
        int num, k;
        cin >> num >> k;
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            G[i][v] = 1;
        }
    }
    vector<pair<int, int> > record(n + 1, make_pair(-1, -1));
    int t = 1;
    for (int i = 1; i <= n; i++) {
        DFS(G, record, i);
    }

    for (int i = 1; i <= n; i++) {
        cout << i << " " << record[i].first
                  << " " << record[i].second << endl;
    }

    return 0;
}