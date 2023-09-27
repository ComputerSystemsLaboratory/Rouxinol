#include<iostream>
using namespace std;
static const int N=100;
int M[N+1][N+1];
int main(){
    int n,u,k,v;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>u>>k;
        for(int j=1;j<=k;j++){
            cin>>v;
            M[u][v]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<(j>1?" ":"")<<M[i][j];
        cout<<"\n";
    }
    return 0;

}
