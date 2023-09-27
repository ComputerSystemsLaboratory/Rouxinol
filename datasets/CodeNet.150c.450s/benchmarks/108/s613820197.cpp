#include <bits/stdc++.h>
using namespace std;

int A[100][100],dk[100],L[100];

void BFS(int n,int u){
    int k;
    queue<int> Q;
    Q.push(u);
    dk[u]=0;L[u]=1;
    while(!Q.empty()){
        k=Q.front();Q.pop();
        for(int i=0;i<n;i++){
            if(A[k][i]==1&&L[i]==-1){
                Q.push(i);L[i]=1;dk[i]=dk[k]+1;
            }
        }
    }
}

int main(){
    int n,v,u,k;
    cin>>n;
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)A[i][j]=-1;
    for(int i=0;i<n;i++){L[i]=-1;dk[i]=-1;}

    for(int i=0;i<n;i++){
        scanf("%d %d",&v,&u);
        v--;
        for(int j=0;j<u;j++){
            scanf("%d",&k);
            k--;
            A[v][k]=1;
        }
    }
    BFS(n,0);
    for(int i=0;i<n;i++){
        printf("%d %d\n",i+1,dk[i]);
    }
}
