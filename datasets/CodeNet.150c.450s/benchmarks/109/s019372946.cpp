#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n,h,m,s,time,ans,cnt;
  char q;
  vector<pair<int,int> > ti;
  while(1){
    cin>>n;
    ans=0,cnt=0;
    if(n==0) break;
    for(int i=0;i<n;i++){
      cin>>h>>q>>m>>q>>s;
      time=h*3600+m*60+s;
      ti.push_back(make_pair(time,1));
      cin>>h>>q>>m>>q>>s;
      time=h*3600+m*60+s;
      ti.push_back(make_pair(time,-1));
    }
    sort(ti.begin(),ti.end());
    for(int i=0;i<ti.size();i++)cnt+=ti[i].second,ans=max(cnt,ans);
    cout<<ans<<endl;
    ti.clear();
  }
  return 0;
}