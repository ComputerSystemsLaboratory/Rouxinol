#include<iostream>
using namespace std;
int main(){
    int n,m,i,j,a,k,b,l,p,q;
    cin>>n >>m;
    int ai[n][m];
    for(int t=1;t<=n;t++){
        for(int u=1;u<=m;u++){
            ai[t-1][u-1]=0;
        }
        
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>a;
            ai[i-1][j-1]=a;
        }
        
    }
    int bi[m];
    for(int u=1;u<=m;u++){
            bi[u-1]=0;
        
    
    }
    for(k=1;k<=m;k++){
        cin>>b;
        bi[k-1]=b;
    }
    int ci[n];
    for(int u=1;u<=n;u++){
        ci[u-1]=0;
    }
    for(l=1;l<=n;l++){
        for (p=1;p<=m;p++){
            ci[l-1]+=ai[l-1][p-1]*bi[p-1];
        }
    }
    for(q=1;q<=n;q++){
        cout<<ci[q-1]<<endl;
    }
    return 0;
}
