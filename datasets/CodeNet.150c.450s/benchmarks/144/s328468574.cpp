#include <iostream>
#include <cmath>
//#include <string>
using namespace std;
int main(){

    int n,m,l;
    cin>>n>>m>>l;
    int A[n][m];
    int B[m][l];
    long C[n][l];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){
            cin>>B[i][j];
        }
    }
    
    for(int i=0;i<l;i++){
        
        for(int j=0;j<n;j++){
            long ans=0;
            for(int u=0;u<m;u++){
                ans+=A[j][u]*B[u][i];
            }
            C[j][i]=ans;
        }
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
           if(j!=l-1) cout<<C[i][j]<<' ';
           else cout<<C[i][j]<<endl;
        }
    }
    
    
    return 0;
}

