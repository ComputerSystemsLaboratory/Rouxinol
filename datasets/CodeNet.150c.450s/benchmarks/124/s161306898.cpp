#include<iostream>
#include<vector>
#define N 101
using namespace std;
int n;
vector<int> D(N,1<<30);
//bool visited[N];
vector<bool> visited(N,0);
vector<int> pre(N,0);
vector<vector<int>> M(N,vector<int>(N,0));
//int M[N][N];

void dijkstra(){
    D[0]=0;
    pre[0]=-1;

    while(1){
        int minD=1<<30;
        int u=-1;
        for(int i=0;i<n;i++){
            if(visited[i]) continue;
            if(D[i]<minD){
                u=i;
                minD=D[i];
            }
        }
        if(u==-1) break;

        visited[u]=1;
        for(int i=0;i<n;i++){
            if(visited[i]) continue;
            if(M[u][i]>0 && D[i]>D[u]+M[u][i]){
                D[i]=D[u]+M[u][i];
                pre[i]=u;
            }
        }

    }
}

void init(){
    cin>>n;
    int u,k,c,v;
    for(int i=0;i<n;i++){
        /*for(int j=0;j<n;j++){
            M[i][j]=0;
        }*/
        visited[i]=false;
        cin>>u>>k;
        for(int j=0;j<k;j++){
            cin>>v>>c;
            M[u][v]=c;
        }
    }
}

int main(){
    init();
    /*for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<M[i][j]<<' ';
        }
        cout<<endl;
    }*/
    dijkstra();
    for(int i=0;i<n;i++){
        cout<<i<<' '<<D[i]<<endl;
    }
    return 0;
}

/*
5
0 3 2 3 3 1 1 2
1 2 0 2 3 4
2 3 0 3 3 1 4 1
3 4 2 1 0 1 1 4 4 3
4 2 2 1 3 3
*/

