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
const int MX=-1*(1e9+7);


int main(){
    int v,e,s;
    int dis[110000];
    fill(dis,&dis[110000],MX);
    vector<vector<pair<int,int>>> E(110000); //to,dis
    cin>>v>>e>>s;
    
    dis[s]=0;
    for(int i=0;i<e;i++){
        int h,t,d;
        cin>>h>>t>>d;
        E[h].push_back(MK(t,d));
    }
    priority_queue<pair<int,int>> q; //-1*dis,to
    bool done[110000]={};
    q.push(MK(0,s));
    while(!q.empty()){
        pair<int,int> a=q.top();
        q.pop();
        if(done[a.S]){continue;}
        done[a.S]=true;
        for(int i=0;i<E[a.S].size();i++){
            pair<int,int> b=E[a.S][i];
            if(dis[b.F]<dis[a.S]-b.S){
                dis[b.F]=dis[a.S]-b.S;
                q.push({dis[b.F],b.F});
            }
        }
    }
    for(int i=0;i<v;i++){
        if(dis[i]!=MX){
            cout<<-1*dis[i]<<endl;
        }
        else{
            cout<<"INF"<<endl;
        }
    }
    
    return 0;
}

