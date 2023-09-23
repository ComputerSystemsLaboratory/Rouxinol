#include<bits/stdc++.h>
using namespace std;

int n;
vector<vector<int> > g;
int ans[101][101];

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        int u,k;
        cin>>u>>k;
        for(int j=0;j<k;j++){
            int v;
            cin>>v;
            ans[u][v]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<ans[i][j];
            if(j!=n) cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}