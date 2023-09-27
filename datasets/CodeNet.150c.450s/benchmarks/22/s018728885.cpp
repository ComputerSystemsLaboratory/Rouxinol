#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct edge{int from,to,cost;};
int n,m,r,a,b,c,d[1000];
vector<edge>v;
int main(void){
    cin>>n>>m>>r;
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        v.push_back({a,b,c});
    }
    for(int i=0;i<n;i++)d[i]=1e9;
    d[r]=0;
    for(int i=0;i<n;i++){
        int ok=0;
        for(int j=0;j<m;j++){
            edge e=v[j];
            if(d[e.from]!=1e9&&d[e.to]>d[e.from]+e.cost){
                d[e.to]=d[e.from]+e.cost;
                ok=1;
                if(i==n-1){
                    cout<<"NEGATIVE CYCLE"<<endl;
                    return 0;
                }
                
            }
        }
        if(!ok)break;
    }
    for(int i=0;i<n;i++){
        if(d[i]==1e9)cout<<"INF"<<endl;
        else cout<<d[i]<<endl;
    }
}

