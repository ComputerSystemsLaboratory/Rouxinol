
#include<bits/stdc++.h>

using namespace std;

const int maxn=1e2+5;
const int inf=(1<<21);
const int white=0;
const int gray=1;
const int black=2;

int n,m[maxn][maxn];

int prim()
{
    int u,minv;
    int d[maxn],p[maxn],color[maxn];
    for(int i=0;i<n;i++){
        d[i]=inf;
        p[i]=-1;
        color[i]=white;
    }
    d[0]=0;
    while(1){
        minv=inf;
        u=-1;
        for(int i=0;i<n;i++){
            if(minv>d[i]&&color[i]!=black){
                u=i;
                minv=d[i];
            }
        }
        if(u==-1){
            break;
        }
        color[u]=black;
        for(int v=0;v<n;v++){
            if(color[v]!=black&&m[u][v]!=inf){
                if(d[v]>m[u][v]){
                    d[v]=m[u][v];
                    p[v]=u;
                    color[v]=gray;
                }
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(p[i]!=-1){
            sum+=m[i][p[i]];
        }
    }
    return sum;
}

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int e;
            cin>>e;
            m[i][j]=(e==-1)?inf:e;
        }
    }
    cout<<prim()<<endl;
    return 0;
}
/*
5
-1 2 3 1 -1
2 -1 -1 4 -1
3 -1 -1 1 1
1 4 1 -1 3
-1 -1 1 3 -1
*/

