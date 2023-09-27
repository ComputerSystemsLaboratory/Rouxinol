#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<cmath>
#define INF 2147483647
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
int main(){
  int x,y,s;
  while(cin>>x>>y>>s,x+y+s){
  vector<pair<int,int> >pii;
  pii.clear();
    for(int i=1;i<s;i++){
      for(int j=i;j<s;j++){
	//cout<<((i*(100+x))/(100))+((j*(100+x))/(100))<<endl;
	if((i*(100+x))/(100)+(j*(100+x))/(100)==s){
	  pii.pb(mp(i,j));
	  //cout<<"!"<<endl;
	}
      }
    }
    int ans=0;
    for(int i=0;i<pii.size();i++){
      //cout<<pii[i].F<<" "<<pii[i].S<<endl;
      ans=max(ans,(pii[i].F*(100+y))/(100)+(pii[i].S*(100+y))/(100));
    }
    cout<<ans<<endl;
  }
  return 0;
}