#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int d[200];
bool table[200][200];

void init(){
    for(int i=0;i<200;i++){
        d[i]=-1;
        for(int j=0;j<200;j++){
            table[i][j]=false;
        }
    }
}

void bfs(int itr, int dis, int n){
    d[itr] = dis;
    for(int i=0;i<n;i++){
        if(table[itr][i]&&(d[i]<0||d[i]>dis+1)){
            bfs(i, dis+1,n);
        }
    }
}

void solve(int n){
    bfs(0,0,n);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    init();
    int n;
    cin >> n;
    int u,k,v;
    for(int i=0;i<n;i++){
        cin >> u >> k;
        for(int j=0;j<k;j++){
            cin >> v;
            table[u-1][v-1]=true;
        }
    }

    solve(n);

    for(int i=0;i<n;i++){
        cout << i+1 << " " << d[i] << endl;
    }

    return 0;
}

