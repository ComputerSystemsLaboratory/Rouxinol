#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
const int INF=1e9;
struct edge{
    int to,cost;
    edge(int a,int b):to(a),cost(b){}
    edge(){}
};
struct data{
    int At,cost;
    data(int a,int b):At(a),cost(b){}
    data(){}
    bool operator>(const data &d)const{
        return cost>d.cost;
    }
};
vector<vector<edge> >E;
int all;
int dijkstra(int s){
    vector<int>D(all,INF);
    priority_queue<data,vector<data>,greater<data> >Q;
    Q.push(data(s,0));
    while(!Q.empty()){
        int At=Q.top().At,cost=Q.top().cost;
        Q.pop();
        if(D[At]<=cost)continue;
        D[At]=cost;
        for(int i=0;i<E[At].size();i++){
            edge e=E[At][i];
            Q.push(data(e.to,e.cost+cost));
        }
    }
    int sum=0;
    for(int i=0;i<all;i++)sum+=D[i];
    return sum;
}
int main(){
    int n;
    while(cin>>n,n){
        E.clear();
        E.resize(10);
        all=0;
        for(int i=0;i<n;i++){
            int a,b,c;
            cin>>a>>b>>c;
            all=max(max(a,b),all);
            E[a].push_back(edge(b,c));
            E[b].push_back(edge(a,c));
        }
        all++;
        int Min=INF,p;
        for(int i=0;i<all;i++){
            int latte=dijkstra(i);
            if(Min>latte){
                Min=latte;
                p=i;
            }
        }

        cout<<p<<" "<<Min<<endl;

    }
}