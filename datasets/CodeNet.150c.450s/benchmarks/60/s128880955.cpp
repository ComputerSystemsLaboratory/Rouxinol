#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,u,d;
    cin>>n;
    vector<vector<int> > Adj(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            Adj[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        cin>>k>>u;
        for(int j=0;j<u;j++){
            cin>>d;
            Adj[k-1][d-1]=1;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==n-1){
                cout<<Adj[i][j]<<"\n";
            }else{
                cout<<Adj[i][j]<<" ";
            }
        }
    }
    
    return 0;
}
