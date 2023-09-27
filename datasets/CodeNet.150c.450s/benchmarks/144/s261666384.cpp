#include <iostream>
using namespace std;
int main(void){
    int n,m,l;
    long long A[100][100],B[100][100],C[100][100]={};
    cin>>n>>m>>l;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=l-1;j++){
            cin>>B[i][j];
        }
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=l-1;j++){
            for(int k=0;k<=m-1;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=l-1;j++){
            if(j!=0)cout<<" ";
            cout<<C[i][j];
        }
        cout<<endl;
    }
    return 0;
}