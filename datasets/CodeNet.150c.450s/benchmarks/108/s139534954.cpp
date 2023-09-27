#include<iostream>
#include<vector>
using namespace std;

int BFS(int s, int t, const vector<vector<int> >& G){
    vector<int> stock1;
    vector<int> stock2;
    stock1.push_back(s);
    vector<int> check(101, 0);
    int d = 0;
    while (1) {
        for (int i = 0; i < stock1.size(); i++) {
            if (stock1[i] == t) return d;
            for (int j = 0; j < G[stock1[i]].size(); j++) {
                if (check[G[stock1[i]][j]] == 0) {
                    check[G[stock1[i]][j]] = 1;
                    stock2.push_back(G[stock1[i]][j]);
                }
            }
        }
        if (stock2.empty()) return -1;
        stock1.clear();
        stock1.swap(stock2);
        d++;
    }
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> > G(n + 1);
    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            G[u].push_back(v);
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << i << " " << BFS(1, i, G) << endl;
    }
    return 0;
}