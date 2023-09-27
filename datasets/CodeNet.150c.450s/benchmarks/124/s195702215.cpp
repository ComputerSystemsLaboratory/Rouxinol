#include<iostream>
using namespace std;

const int N=100;
const int INF=2000000000;
const int WHITE=0;
const int GRAY=1;
const int BLACK=2;

int n,M[N][N],d[N],color[N];

void dijkstra(){
    d[0]=0;
    color[0]=GRAY;
    while(true){
        int min_des=INF;
        int vertex=-1;
        for(int i=0;i<n;i++){
            if(min_des>d[i]&&color[i]==GRAY){
                min_des=d[i];
                vertex=i;
            }
        }
        if(vertex==-1) break;
        color[vertex]=BLACK;
        for(int i=0;i<n;i++){
            if(color[i]!=BLACK&&M[vertex][i]<INF){
                if(d[i]>d[vertex]+M[vertex][i]){
                    d[i]=d[vertex]+M[vertex][i];
                    color[i]=GRAY;
                }
            }
        }
    }
}        

int main(){
    int u,k,v,c;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            M[i][j]=INF;
        }
        d[i]=INF;
        color[i]=WHITE;
    }
    for(int i=0;i<n;i++){
        cin>>u>>k;
        for(int j=0;j<k;j++){
            cin>>v>>c;
            M[u][v]=c;
        }
    }

    dijkstra();

    for(int u=0;u<n;u++){
        cout<<u<<' '<<d[u]<<endl;
    }
}

