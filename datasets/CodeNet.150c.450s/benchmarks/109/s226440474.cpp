#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
  int a,h,m,s,sum,r;
  char c;
  vector<pair<int,int> > vp;
  pair<int,int> p;
  while(1){
    cin>>a;
    vp.clear();
    if(a==0)break;
    for(int i=0;i<a;i++){
      cin>>h>>c>>m>>c>>s;
      h=h*3600+m*60+s;
      p.first=h;p.second=1;
      vp.push_back(p);
      cin>>h>>c>>m>>c>>s;
      h=h*3600+m*60+s;
      p.first=h;p.second=-1;
      vp.push_back(p);
    }
    sort(vp.begin(),vp.end());
    r=0;
    sum=0;
    for(int i=0;i<vp.size();i++){
      r+=vp[i].second;
      if(r>sum)sum=r;
    }
    cout<<sum<<endl;
  }
  return 0;
}