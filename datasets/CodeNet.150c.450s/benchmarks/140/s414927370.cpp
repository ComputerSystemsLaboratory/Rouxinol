#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef pair<int,int> P;//cost,to
typedef vector<P> vertex;

#define MAX_E 100000
#define MAX_V 10000


int main(){
    int nv,ne;
    cin>>nv>>ne;
    vertex V[MAX_V];

    for(int i=0;i<ne;i++){
        int s,t,w;
        cin>>s>>t>>w;
        V[s].emplace_back(w,t);
        V[t].emplace_back(w,s);
    }
    bool isUsed[nv];
    fill(isUsed,isUsed+nv,false);

    priority_queue<P,vector<P>,greater<P>> que;
    que.emplace(0,0);
    int ans=0;
    while(!que.empty()){
        P p = que.top();que.pop();
        int from=p.second;
        if(isUsed[from])continue;
        isUsed[from]=true;
        ans+=p.first;
        for(auto& e:V[from]){
            int to=e.second, weight=e.first;
            if(!isUsed[to]) que.emplace(weight,to);
        }
    }
    cout<<ans<<endl;
    return 0;
}