#include<iostream>
#include<algorithm>

using namespace std;

int g[102][102];
int d[102], f[102];
int t = 0, n;

int dfs(int x){
    t++;
    //cout<<x<<" s: "<<t<<endl;
    for(int i=1; i<=n; i++){
        if(d[x] == 0) d[x] = t;
       
        if(g[x][i] == 1 && f[i] == 0){
            g[x][i] = 0;
            if(d[i] == 0){
                dfs(i);
                t++;
            }   
        }
        
        if(i == n && f[x] == 0){
            //   cout<<x<<" e: "<<t+1<<endl;
            f[x] = t+1;
        }
    }
    return 0;        
  
}

int main(){
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            g[i][j] = 0;
        }
        d[i] = 0;
        f[i] = 0;
    }
    
    int u,k;
    for(int i=0; i<n; i++){
        cin>>u>>k;
        for(int j=0; j<k; j++){
            int v;
            cin>>v;
            g[u][v] = 1;
        }
    }

    for(int i=1; i<=n; i++){
        if(f[i]==0){
            dfs(i);
            t++;
        }
    }

    for(int i=1; i<=n; i++){
        cout<< i << " " << d[i] << " " << f[i] <<endl;
    }
    
    return 0;
}