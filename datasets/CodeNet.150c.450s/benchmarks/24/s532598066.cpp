#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
typedef pair <int,int> pii;
int main(){
  int n,m;
  while(cin>>n>>m,n){
    vector<pii> d(n);
      for(int i=0;i<n;i++)cin>>d[i].second>>d[i].first;
      sort(d.begin(),d.end(),greater<pii>());
    int ans=0;
    for(int i=0;i<n;i++){
      if(m>d[i].second){
	m-=d[i].second;
	continue;
      }else if(m!=0){
	d[i].second-=m;
	m=0;
      }
      ans+=d[i].second*d[i].first;
    }
    cout << ans << endl;
  }
  return 0;
}