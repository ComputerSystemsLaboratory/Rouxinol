#include <iostream>
#include <set>
using namespace std;
    int d[101];
    int G[101][101]={};
void krusta(int n){
    int color[101],l,m;
    for(int i=0;i<n;i++){
        d[i]=1000000;
        color[i]=0;
    }
    d[0]=0;
    while(1){
        m=1000000;
        for(int i=0;i<n;i++){
            if(color[i]!=1 && d[i]<m){
                m=d[i];
                l=i;
            }
        }
        color[l]=1;
        if(m==1000000){
            break;
        }
        for(int i=0;i<n;i++){
            if(color[i]!=1 && G[l][i]!=0 && G[l][i]+d[l]<d[i]){
                d[i]=G[l][i]+d[l];
            }
        }
    }
}
int main(){
    int n,v,k,c,u;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>u>>k;
        for(int j=0;j<k;j++){
            cin>>v>>c;
            G[u][v]=c;
        }
    }
    krusta(n);
    for(int i=0;i<n;i++){
        cout<<i<<" "<<d[i]<<endl;
    }
    return 0;
}
