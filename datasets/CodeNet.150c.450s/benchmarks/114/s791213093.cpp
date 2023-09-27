#include <bits/stdc++.h>
using namespace std;
#define INFTY (1<<30)

int n;
vector<int> color(101,0),d(101,INFTY),p(101);
vector<vector<int>> M(101,vector<int>(101,INFTY));

void prim(){
    d[0]=0;
    p[0]=-1;

    while(1){
        int u;
        int mincost=INFTY;
        for(int i=0;i<n;i++){
            if(color[i]!=2&&d[i]<mincost){
                mincost=d[i];
                u=i;
            }
        }
        if(mincost==INFTY) break;
        color[u]=2;

        for(int v=0;v<n;v++){
            if(color[v]!=2&&M[u][v]<INFTY){
                if(M[u][v]<d[v]){
                    d[v]=M[u][v];
                    p[v]=u;
                    color[v]=1;
                }
            }
        }

    }

}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>M[i][j];
            if(M[i][j]==-1) M[i][j]=INFTY;
        }
    }

    prim();

    int ans=0;
    for(int i=0;i<n;i++){
        ans+=d[i];
    }
    cout<<ans<<endl;
}
