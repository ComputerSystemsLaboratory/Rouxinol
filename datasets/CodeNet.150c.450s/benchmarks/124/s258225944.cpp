#include <iostream>
using namespace std;
int n,m[100][100],d[100];
void mins(){
    int u,min,color[100];
    for(int i=0;i<n;i++){
        d[i]=1000000000;
        color[i]=1;
    }
    d[0]=0;
    while(1){
        min=1000000000;
        u=-1;
        for(int i=0;i<n;i++){
            if(color[i]!=3&&d[i]<min){
                u=i;
                min=d[i];
            }
        }
        if(u==-1){
            break;
        }
        color[u]=3;
        for(int i=0;i<n;i++){
            if(m[u][i]!=-1){
                if(d[i]>min+m[u][i]){
                    d[i]=min+m[u][i];
                }
            }
        }
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            m[i][j]=-1;
        }
    }
    int a,k,c,v;
    for(int i=0;i<n;i++){
        cin>>a>>k;
        for(int j=0;j<k;j++){
            cin>>c>>v;
            m[a][c]=v;
        }
    }
    mins();
    for(int i=0;i<n;i++){
        cout<<i<<" "<<d[i]<<endl;
    }
    return 0;
}
