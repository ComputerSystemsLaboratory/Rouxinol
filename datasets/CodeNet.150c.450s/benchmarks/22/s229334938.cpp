#include<bits/stdc++.h>
using namespace std;

template<typename T>
struct E{
  int from,to;
  T cost;
};

template<typename T>
vector<T>bellman_ford(vector<E<T>>&g,int s,int sz){
  T inf=numeric_limits<T>::max();
  vector<T>d(sz,inf);
  d[s]=0;
  for(int i=0;i<sz-1;i++)for(auto e:g)if(d[e.from]!=inf)d[e.to]=min(d[e.to],d[e.from]+e.cost);
  for(auto e:g)if(d[e.from]!=inf&&d[e.from]+e.cost<d[e.to])return vector<T>();
  return d;
}

int main(){
  int N,M,S;
  cin>>N>>M>>S;
  vector<E<int>>G(M);
  for(int i=0;i<M;i++){
    int a,b,c;
    cin>>a>>b>>c;
    G[i]={a,b,c};
  }
  vector<int>ans=bellman_ford<int>(G,S,N);
  if(ans==vector<int>())cout<<"NEGATIVE CYCLE"<<endl;
  else for(auto it:ans){
    if(it==numeric_limits<int>::max())cout<<"INF"<<endl;
    else cout<<it<<endl;
  }
}

