#include <iostream>

using namespace std;

static const int WHITE=0;
static const int GRAY=1;
static const int BLACK=2;
static const int LEN=100;
static const int INF=(1<<21);

int n,M[LEN][LEN];


int prim()
{
    int u,minc;
    int d[LEN],node[LEN],color[LEN];
    for(int i=0; i<n; i++){
        node[i]=-1;
        d[i]=INF;
        color[i]=WHITE;
    }
    d[0]=0;

    while(1){
        minc=INF;
        u=-1;
        for(int i=0;i<n;i++){
            if(d[i]<minc && color[i]!=BLACK){
                u=i; minc=d[i];
            }
        }

        if(u==-1) break;
        color[u]= BLACK;

        for(int i=0;i<n;i++){
            if(color[i]!=BLACK && M[u][i]!=INF){
                if(M[u][i]<d[i]){
                    d[i]=M[u][i];
                    node[i]=u;
                    color[i]=GRAY;
                }
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(node[i]!=-1) sum+=M[i][node[i]];
    }
    return sum;
}



int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int k;
            cin>>k;
            M[i][j]=(k==-1?INF:k);
        }
    }
    cout<<prim()<<endl;

    return 0;
}

