#include<iostream>
#include<vector>
#define NIL -1
using namespace std;

void DFS(int id, const vector<vector<int> >& a,
          vector<int>& find, vector<int>& finish){
    static int t = 1;
    if (find[id] != NIL) return;
    find[id] = t++;
    for (int i = 0; i < a[id].size(); i++) {
        DFS(a[id][i], a, find, finish);
    }
    finish[id] = t++;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> > a(n + 1);
    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            a[u].push_back(v);
        }
    }
    vector<int> find(n + 1, NIL);
    vector<int> finish(n + 1, NIL);
    for (int i = 1; i <= n; i++) {
        DFS(i, a, find, finish);
    }
    for (int i = 1; i <= n; i++) {
        cout << i << " " << find[i] << " " << finish[i] << endl;
    }

    return 0;
}