#include <bits/stdc++.h>
using namespace std;
#define INFTY powl(2,60)

int n,m;
vector<vector<long long>> A(101,vector<long long>(101,INFTY));

int warshallFloyd(){
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                A[i][j]=min(A[i][j],A[i][k]+A[k][j]);
                if(A[j][j]<0) return -1;
            }
        }
    }
    return 0;    
}

int main(){
    int a,b;
    long long c;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        A[i][i]=0;
    }
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        A[a][b]=c;
    }

    int x=warshallFloyd();
    if(x==-1) cout<<"NEGATIVE CYCLE"<<endl;
    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j) cout<<' ';
                if(A[i][j]>powl(2,50)) cout<<"INF";
                else cout<<A[i][j];
            }
            cout<<endl;
        }
    }
}
