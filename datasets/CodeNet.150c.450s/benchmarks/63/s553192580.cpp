#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef pair<long long int,int> P;
struct vertex{
    vector<P> E;//cost,to
};
#define INF 5000000001
vertex V[100000];
long long int minimum[100000];

int main(){
    int NV,NE,r;
    cin>>NV>>NE>>r;
    fill(minimum,minimum+100000,INF);
    for(int i=0;i<NE;i++){
        int s,t,d;
        cin>>s>>t>>d;
        V[s].E.emplace_back(d,t);
    }

    priority_queue<P,vector<P>,greater<P>> que;
    que.emplace(0,r);
    minimum[r]=0;
    while(!que.empty()){
        P p = que.top();que.pop();
        int cost = p.first, from = p.second;
        if(cost>minimum[from]) continue;
        for(auto& e:V[from].E){
            if(cost+e.first<minimum[e.second]){
                minimum[e.second]=cost+e.first;
                que.emplace(cost+e.first,e.second);
            }
        }
    }
    for(int i=0;i<NV;i++){
        if(minimum[i]==INF){
            cout<<"INF"<<endl;
        }else{
            cout<<minimum[i]<<endl;
        }
    }
    return 0;
}