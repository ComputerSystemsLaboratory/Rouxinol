#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

pair<int,int> road[10000];

int main() {
  int N,M,d,p;
  while(cin>>N>>M, N|M) {
      for(int i=0; i<N; ++i) {
	cin>>d>>p;
	road[i] = pair<int,int>(p,d);
      }

      sort(road,road+N);

      int ans = 0;
      for(int i=N-1; i>=0; --i) {
	if(M <= 0) {
	  ans += road[i].first*road[i].second;
	}else if(M <= road[i].second) {
	  ans += road[i].first*(road[i].second-M);
	  M = 0;
	} else {
	  M -= road[i].second;
	}
      }
      cout<<ans<<endl;
  }
}