#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
  int n;
  vector< pair<int,int> > tm;
  while(cin>>n && n){
    tm.clear();
    char ch1,ch2;
    int h,m,s;
    for(int i=0;i<n;i++){
      cin>>h>>ch1>>m>>ch2>>s;
      tm.push_back(make_pair(h*3600+m*60+s,1));
      cin>>h>>ch1>>m>>ch2>>s;
      tm.push_back(make_pair(h*3600+m*60+s,-1));
    }
    sort(tm.begin(),tm.end());
    int ans=0;
    int co=0;
    for(int i=0;i<(int)tm.size();i++){
      co+=tm[i].second;
      ans = max(co,ans);
    }
    cout<<ans<<endl;
  }
  return 0;
}