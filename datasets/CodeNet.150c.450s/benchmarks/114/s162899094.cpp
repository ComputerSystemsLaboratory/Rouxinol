#include <iostream>
#include <set>
using namespace std;
    int d[101];
    int G[101][101];
void krusta(int n){
    int color[101],l,m;
    for(int i=1;i<=n;i++){
        d[i]=1000000;
        color[i]=0;
    }
    d[1]=0;
    while(1){
        m=1000000;
        for(int i=1;i<=n;i++){
            if(color[i]!=1 && d[i]<m){
                m=d[i];
                l=i;
            }
        }
        color[l]=1;
        if(m==1000000){
            break;
        }
        for(int i=1;i<=n;i++){
            if(color[i]!=1 && G[l][i]!=-1 && G[l][i]<d[i]){
                d[i]=G[l][i];
            }
        }
    }
}
int main(){
    int n,m;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>m;
            G[i][j]=m;
        }
    }
    krusta(n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+d[i];
    }
    cout<<sum<<endl;
    return 0;
}
