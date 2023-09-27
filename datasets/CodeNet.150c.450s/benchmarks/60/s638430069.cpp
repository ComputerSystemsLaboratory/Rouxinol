#include<bits/stdc++.h>
using namespace std;

//隣接リスト

int main(){

    int V; cin >> V;
    vector<vector<int> > adjlist(V);      

    //入力
    for(int i = 0; i < V; i++){
        int gomi; cin >> gomi;
        int k; cin >> k;
        for(int j = 0; j < k; j++){
            int a; cin >> a;
            adjlist[i].push_back(a - 1);
        }
    }

    vector<vector<int> > array(V, vector<int> (V, 0));

    for(int i = 0; i < V; i++){
        for(int j = 0; j < adjlist[i].size(); j++){
            array[i][adjlist[i][j]] = 1;
        }
    }

    //出力
    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            if(j == V - 1) cout << array[i][j] << endl;
            else cout << array[i][j] << " ";
        }
    }

    return 0;
}
