#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main(){ _;
  int n,m;
  while(cin>>n>>m,(n|m)!=0){
    map<int,int> h,w;
    vector<int> v;
    int tmp;
    REP(i,n){
      cin>>tmp;
      v.push_back(0);
      for(int &a:v){
	a+=tmp;
	h[a]++;
      }
    }
    v.clear();
    REP(i,m){
      cin>>tmp;
      v.push_back(0);
      for(int &a:v){
	a+=tmp;
	w[a]++;
      }
    }
    int sum=0;
    for(auto hh:h){
      if(w[hh.first]>0){
	sum+=w[hh.first]*hh.second;
      }
    }
    cout<<sum<<endl;
  }
}