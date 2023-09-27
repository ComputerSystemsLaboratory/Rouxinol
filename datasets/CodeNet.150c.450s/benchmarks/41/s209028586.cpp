#include <bits/stdc++.h>
using namespace std;

const int MAX=105;
const long long int INF=(1LL<<32);

long long int D[MAX][MAX];
int N;

void floyd(){
    for(int k=0;k<N;k++){
        for(int i=0;i<N;i++){
            if(D[i][k]==INF) continue;
            for(int j=0;j<N;j++){
                if(D[k][j]==INF) continue;
                D[i][j]=min(D[i][j],D[i][k]+D[k][j]);
            }
        }
    }
}

int main(){

    int E;cin>>N>>E;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j) D[i][j]=0;
            else D[i][j]=INF;
        }
    }
    for(int i=0;i<E;i++){
        int s,t,d;
        cin>>s>>t>>d;
        D[s][t]=d;
    }
    
    floyd();
    
    bool ans=true;
    
    for(int i=0;i<N;i++){
        if(D[i][i]<0){
            cout<<"NEGATIVE CYCLE"<<endl;
            ans=false;
            break;
        }
    }
    
    if(ans){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(j) cout<<" ";
            if(D[i][j]==INF) cout<<"INF";
            else cout<<D[i][j];
        }
        cout<<endl;
    }
    }
    
}


