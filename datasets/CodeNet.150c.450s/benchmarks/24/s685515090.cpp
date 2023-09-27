#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main() {
  while(1){
    int n,m;
    cin>>n>>m;
    if(!n)break;
    vector<tuple<int,int>> v;
    REP(i,n){
      int d,p;
      cin>>d>>p;
      v.emplace_back(-p,d);
    }
    sort(begin(v),end(v));
    int sum=0;
    REP(i,n){
      int d,p;
      tie(p,d)=v[i];
      if(d <= m){
        m-=d;
      }else{
        sum += -p * (d-m);
        m=0;
      }
    }
    cout<<sum<<endl;
  }
  return 0;
}