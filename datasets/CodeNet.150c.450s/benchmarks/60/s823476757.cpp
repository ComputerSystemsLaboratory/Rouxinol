#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    int n; cin >> n;
    bool graph[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) graph[i][j]=false;
    }
    for(int i=0; i<n; i++){
        int v,k; cin >> v >> k;
        for(int j=0; j<k; j++){
            int w; cin >> w;
            graph[v-1][w-1]=true;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j) cout << " ";
            cout << graph[i][j];
        }
        cout << endl;
    }
}
