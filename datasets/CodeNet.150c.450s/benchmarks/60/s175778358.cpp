#include <iostream>
#include <vector>
using namespace std;
#define MAXN 101

bool find(vector<int> v, int j){
    bool e = false;
    for(vector<int>::iterator it = v.begin(); it!=v.end(); ++it){
        if (*it == j) e = true;
    }
    return e;
}

int main(){
    vector<int> adj[MAXN];
    int n; cin >> n;
    for(int i=1; i<=n; ++i){
        int l, m; cin >> l >> m;
        for(int j=0; j<m; ++j){
            int k; cin >> k;
            adj[l].push_back(k);
        }
    }
    
    for(int i=1; i<=n; ++i){
        for(int j=1; j<n; ++j){
            cout << (find(adj[i], j) ? 1 : 0 ) << " ";
        }
        cout << (find(adj[i], n) ? 1:0) << endl;
    }
}