#include <iostream>
#include <map>

using namespace std;

int h[1501],w[1501];
int main(){
  int N,M;
  while(cin>>N>>M&&(N>0&&M>0)){
    for(int i=0;i<N;++i){
      cin>>h[i];
    }
    for(int i=0;i<M;++i){
      cin>>w[i];
    }

    map<int,int> hmap,wmap;
    for(int i=0;i<N;++i){
      int hsum = 0;
      for(int j=i;j<N;++j){
        hmap[hsum+=h[j]]++;
      }
    }
    for(int i=0;i<M;++i){
      int wsum = 0;
      for(int j=i;j<M;++j){
        wmap[wsum+=w[j]]++;
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