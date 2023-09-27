#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  vector<pair<int,int> > d;
  pair<int,int> k;
  int n,m,a,b,sum;
  while(1){
    cin>>n>>m;
    if(n==0)break;
    d.clear();
    for(int i=0;i<n;i++){
      cin>>a>>b;
      k.first=b*-1;
      k.second=a;
      d.push_back(k);
    }
    sort(d.begin(),d.end());
    sum=0;
    for(int i=0;i<n;i++){
      if(m!=0){
	if(d[i].second<m){
	  m-=d[i].second;
	}else {
	  sum+=(d[i].first*-1)*(d[i].second-m);
	  m=0;
	}
      }else {
	sum+=(d[i].first*-1)*d[i].second;
      }
    }
    cout<<sum<<endl;
  }
  return 0;
}