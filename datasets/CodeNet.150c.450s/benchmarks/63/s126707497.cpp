#include<iostream>
#include<queue>
#include<utility>
#include<vector>
using namespace std;
int V,E,R,S[500010],T[500010],D[500010];
int C[100010];
int const inf=10000*100000+100;
typedef pair<int,int>P;
priority_queue<P,vector<P>,greater<P> > Q;
struct list{
    int d,t;
};
vector<list> edges[500010];
int main(){
    cin>>V>>E>>R;
    for(int i=0;i<E;++i){
        cin>>S[i]>>T[i]>>D[i];
        list L;
        L.d=D[i];
        L.t=T[i];
        edges[S[i]].push_back(L);
    }
    for(int j=0;j<V;++j){
        if(j==R){
            C[j]=0;
        }
        else C[j]=inf;
    }
    Q.push(P(0,R));
    while(!Q.empty()){
        P n=Q.top();
        Q.pop();
        int m1=n.first;//distance
        int m2=n.second;//To...
        if(C[m2]<m1)continue;
        for(int i=0;i<edges[m2].size();++i){
            list L=edges[m2][i];
            if(C[L.t]>C[m2]+L.d){
                C[L.t]=C[m2]+L.d;
                Q.push(P(C[L.t],L.t));
            }
        }
    }
    for(int i=0;i<V;++i){
        if(C[i]==inf)cout<<"INF"<<endl;
        else cout<<C[i]<<endl;
    }
}