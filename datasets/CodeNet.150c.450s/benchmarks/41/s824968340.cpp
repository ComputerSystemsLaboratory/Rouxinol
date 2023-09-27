//https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 2000000000000
#define MAX_V 2000

ll D[MAX_V][MAX_V];
int V,E;

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
    int i,j;
    ll s,t,d,dall=0;
    bool flg=false;
    cin>>V>>E;
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

    //rからだどりつける負の閉路があるか判定
    for(i=0;i<V;i++){
        if(D[i][i]<0){
            flg=true;
            break;
        }
    }

    if(flg){
        cout<<"NEGATIVE CYCLE\n";
    }else{
        for(i=0;i<V;i++){
            if(D[i][0]>dall)cout<<"INF";
            else cout<<D[i][0];
            for(j=1;j<V;j++){
                if(D[i][j]>dall)cout<<" INF";
                else cout<<" "<<D[i][j];
            }
            cout<<"\n";
        }
    }
}
