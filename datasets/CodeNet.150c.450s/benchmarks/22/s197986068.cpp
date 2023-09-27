#include<utility>
#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<cmath>
#include<numeric>
#include<cassert>
#include<random>
using namespace std;
#define MK make_pair
#define F first
#define S second
#define ege pair<int,pair<int,int>> //w,s,t
const int MX=1e9+7;






int main(){
    int v,e,r;
    vector<ege> E;
    int dis[10000];
    fill(dis,&dis[10000],MX);
    cin>>v>>e>>r;
    dis[r]=0;
    for(int i=0;i<e;i++){
        int s,t,d;
        cin>>s>>t>>d;
        E.push_back({d,{s,t}});
    }
    for(int i=0;i<e;i++){
        for(int t=0;t<e;t++){
            ege s=E[t];
            if(dis[s.S.F]==MX){continue;}
            dis[s.S.S]=min(dis[s.S.S],dis[s.S.F]+s.F);
        }
    }
    bool j=false;
    for(int t=0;t<e;t++){
        ege s=E[t];
        if(dis[s.S.F]==MX){continue;}
        if(dis[s.S.S]>dis[s.S.F]+s.F){j=true; break;}
    }
    if(j){cout<<"NEGATIVE CYCLE"<<endl;}
    else{
        for(int i=0;i<v;i++){
            if(dis[i]==MX){cout<<"INF"<<endl; continue;}
            cout<<dis[i]<<endl;
        }
    }
    
    return 0;
}
