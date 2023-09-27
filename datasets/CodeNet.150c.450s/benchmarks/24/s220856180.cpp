#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main(){
  long long int n,m;
  while(cin >>n>>m,n||m){
    vector<pair<long long int, long long int> > road;
    for(int i=0,a,b; i<n; i++){
      cin >>a>>b;
      road.push_back(make_pair(b,a));
    }
    long long int ans = 0;
    sort(road.begin(),road.end());
    for(int i=n-1; i>=0; i--){
      if(road[i].second < m){m-=road[i].second;road[i].second = 0;}
      else{road[i].second-=m;m = 0;}
      ans+=road[i].first*road[i].second;
    }
    cout <<ans<<endl;
  }
  return 0;
}