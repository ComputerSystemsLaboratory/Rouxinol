#include<iostream>
#define N 101
#define INF 1<<21
using namespace std;

int A[N][N];
int n;
int visited[N];
int d[N];
int p[N];

void dijkstra(int b){
    d[b]=0;
    p[b]=-1;
    int node=-1;
    int minval=INF;
    while(1){
        node=-1;
        minval=INF;
        for(int i=0;i<n;i++){
            if(visited[i]==true) continue;
            if(d[i]<minval){
                node=i;
                minval=d[i];
            }
        }
        if(node==-1) break;
        visited[node]=true;
        for(int e=0;e<n;e++){
            if(A[node][e]==INF || visited[e]==true) continue;
            if(d[e]>d[node]+A[node][e]){
                d[e]=d[node]+A[node][e];
            }
        }
    }
}

void init(){
    int k;
    int b,e,val;
    cin>>n;
    for(int i=0;i<n;i++){
        visited[i]=false;
        d[i]=INF;
        p[i]=-1;
        for(int j=0;j<n;j++){
            A[i][j]=INF;
        }
    }
    for(int i=0;i<n;i++){
        cin>>b>>k;
        for(int j=0;j<k;j++){
            cin>>e>>val;
            A[b][e]=val;
        }
    }
}

int main(){
    init();

    dijkstra(0);

    for(int i=0;i<n;i++){
        cout<<i<<' '<<d[i]<<endl;
    }
    return 0;
}

