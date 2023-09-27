#include <cstdio>
#include <vector>
using namespace std;

void dfs(int cur, vector<vector<int> > arr, int d[], int f[], int &time, int n, bool psd[]){
    d[cur] = time;
    time++;
    psd[cur] = true;
    for(int dst = 0; dst < n; dst++){
        if(arr[cur][dst] == 1 && !psd[dst]){
            dfs(dst,arr,d,f,time,n,psd);
        }
    }
    f[cur] = time;
    time++;
}

int main(){
    int n;
    scanf("%d",&n);
    vector<vector<int> > arr(n,vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++){
        int u,k;
        scanf("%d %d",&u,&k);
        for(int j = 0; j < k; j++){
            int v;
            scanf("%d",&v);
            arr[u-1][v-1] = 1;
        }
    }
    int d[n],f[n],time = 1;
    bool psd[n];
    for(int i = 0; i < n; i++){
        psd[i] = false;
    }
    for(int cur = 0; cur < n; cur++){
        if(!psd[cur]){
            dfs(cur,arr,d,f,time,n,psd);
        }
    }
    for(int id = 0; id < n; id++){
        printf("%d %d %d\n", id+1, d[id], f[id]);
    }
}