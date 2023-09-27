#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;


int main(){
  while(1){
    int N,M;
    long ans=0;
    cin >> N >> M;
    pair<int,int> X[N];
    if(N==0&&M==0) break;
    for(int i=0;i<N;++i) cin >> X[i].second >> X[i].first;
    sort(X,X+N);
    reverse(X,X+N);
    for(int i=0;i<N&&M>0;++i){
      for(;X[i].second>0&&M>0;--M){
	X[i].second--;
      }
    }
    
    for(int i=0;i<N;++i){
      ans+=X[i].first*X[i].second;
    }
    cout<<ans<<endl;;
  }
}