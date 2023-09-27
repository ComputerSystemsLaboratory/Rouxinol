#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int g[n+1][n+1];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            g[i][j] = 0;
        }
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
        for(int j=1; j<=n; j++){
            cout<<g[i][j];
            if(j%n != 0)cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}