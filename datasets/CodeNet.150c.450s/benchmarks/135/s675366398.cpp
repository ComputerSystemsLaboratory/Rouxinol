#include <iostream>
#include <map>

using namespace std;

int y[1501],x[1501];
int main(){
  int N,M;
  while(cin>>N>>M&&(N>0&&M>0)){
    for(int i=1,s=0;i<=N;++i){
      int h;
      cin>>h;
      s += h;
      y[i] = s;
    }
    for(int i=1,s=0;i<=M;++i){
      int w;
      cin>>w;
      s += w;
      x[i] = s;
    }

    map<int,int> hmap,wmap;
    for(int i=0;i<N;++i){
      for(int j=i+1;j<=N;++j){
        hmap[y[j]-y[i]]++;
      }
    }
    for(int i=0;i<M;++i){
      for(int j=i+1;j<=M;++j){
        wmap[x[j]-x[i]]++;
      }
    }

    long num = 0;
    for(const auto &p:hmap){
      num += wmap[p.first]*p.second;
    }
    cout<<num<<endl;
  }
  return 0;
}