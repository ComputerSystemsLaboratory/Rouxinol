#include<iostream>
#include<vector>
#include<list>
#define INF 1e9
using namespace std;

void Dikstra(const vector<vector<pair<int, int> > >& G, vector<int>& d){
    d[0] = 0;
    list<int> i_gray;
    i_gray.push_back(0);
    vector<bool> is_black(d.size(), false);
    is_black[0] = true;
    while (!i_gray.empty()) {
        list<int>::iterator min_it = i_gray.begin();
        for (list<int>::iterator it = i_gray.begin(); it != i_gray.end(); it++) {
            if (d[*it] < d[*min_it]) min_it = it;
        }
        is_black[*min_it] = true;
        for (int i = 0; i < G[*min_it].size(); i++) {
            int v = G[*min_it][i].first;
            int w = G[*min_it][i].second;
            if (!is_black[v] && d[*min_it] + w < d[v]) {
                if (d[v] == INF) i_gray.push_back(v);
                d[v] = d[*min_it] + w;
            }
        }
        i_gray.erase(min_it);
    }
}

int main(){
    int n;
    cin >> n;
    vector<vector<pair<int, int> > > G(n);
    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v, c;
            cin >> v >> c;
            G[u].push_back(make_pair(v, c));
        }
    }
    vector<int> d(n, INF);
    Dikstra(G, d);
    for (int i = 0; i < n; i++) {
        cout << i << " " << d[i] << endl;
    }

    return 0;
}