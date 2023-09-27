#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000
#define MAX_V 2000

int D[MAX_V][MAX_V];
int V,E,r;

void warshall_floyd(){
    int i,j,k;
    for(k=0;k<V;k++){
        for(i=0;i<V;i++){
            for(j=0;j<V;j++){
                D[i][j]=min(D[i][j],D[i][k]+D[k][j]);
            }
        }
    }
}

int main(){
    int i,j,s,t,d,dall=0;
    bool flg=false;
    cin>>V>>E>>r;
    for(i=0;i<V;i++){
        for(j=0;j<V;j++){
            if(i==j)D[i][j]=0;
            else D[i][j]=INF;
        }
    }
    for(i=0;i<E;i++){
        cin>>s>>t>>d;
        D[s][t]=d;
        if(d>=0)dall+=d;
    }

    warshall_floyd();
    /*for(i=0;i<V;i++){
        for(j=0;j<V;j++)cout<<D[i][j]<<" ";
        cout<<"\n";
    }*/

    for(i=0;i<V;i++){
        if(D[i][i]<0 && D[r][i]<=dall){
            flg=true;
            break;
        }
    }

    if(flg){
        cout<<"NEGATIVE CYCLE\n";
    }else{
        for(i=0;i<V;i++){
            if(D[r][i]>dall)cout<<"INF\n";
            else cout<<D[r][i]<<"\n";
        }
    }
}
