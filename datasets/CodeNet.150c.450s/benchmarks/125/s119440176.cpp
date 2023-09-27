#include <iostream>
using namespace std;

int r[101][101];
int d[101], f[101], num, visit[101], p=0;

void dfs(int n){
    if(!visit[n]){
        visit[n]++;
        d[n] = ++p;
        for(int i=1; i<num+1; i++)
            if(r[n][i]) dfs(i);
        f[n] = ++p;
    }
}

int main(void){
    int u, k, v;
    cin >> num;
    for(int i=0; i<num; i++){
        cin >> u >> k;
        for(int j=0; j<k; j++){
            cin >> v;
            r[u][v]++;
        }
    }
    for(int i=1; i<num+1; i++){
        if(!visit[i]) dfs(i);
    }
    for(int i=1; i<num+1; i++)
        cout << i << " " << d[i] << " " << f[i] << endl;
}

