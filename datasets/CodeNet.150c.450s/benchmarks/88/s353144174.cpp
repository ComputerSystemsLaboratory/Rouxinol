#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<complex>
#define INF 2147483647
#define llINF 9223372036854775807
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
int main(){
  int a,b;
  vector<pair<int,pair<int,int> > >pii;
  for(int i=1;i<=150;i++){
    for(int j=i+1;j<=150;j++){
      pii.pb(mp(i*i+j*j,mp(i,j)));
    }
  }
  sort(pii.begin(),pii.end());
  while(cin>>a>>b,a+b){
    for(int i=0;i<pii.size();i++){
      if(pii[i].S.F==a&&pii[i].S.S==b){
	cout<<pii[i+1].S.F<<" "<<pii[i+1].S.S<<endl;
	break;
      }
    }
  }
  return 0;
}