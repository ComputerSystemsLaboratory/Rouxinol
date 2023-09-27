#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n,m;
  vector<pair<int,int>> conclusion;

  while(cin>>n>>m,n,m){
    int taro_total=0;
    int hanako_total=0;
    int min=200;
    int t;
    int h;
    vector<int> taro;
    vector<int> hanako;
    pair<int,int> result;

    for(int i=0;i<n;++i){
      cin>>t;
      taro.push_back(t);
      taro_total+=t;
    }

    for(int i=0;i<m;++i){
      cin>>h;
      hanako.push_back(h);
      hanako_total+=h;
    }

    int flag=0;

    for(auto p:taro){
      for(auto q:hanako){
	if((taro_total-p+q==hanako_total-q+p) && min>p+q){
	  flag=1;
	  min=p+q;
	  result.first=p;
	  result.second=q;
	}
      }
    }
    if(flag==0) conclusion.push_back({-1,-1});
    else conclusion.push_back(result);
  }
  for(auto p:conclusion){
    if(p.first==-1) cout<<p.first<<endl;
    else cout<<p.first<<" "<<p.second<<endl;
  }
}