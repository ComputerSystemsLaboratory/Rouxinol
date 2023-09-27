#include<bits/stdc++.h>
using namespace std;
#define int long long
char buf[22222];
signed main(){
  scanf("%s",buf);
  string s(buf);
  int n=s.size();
  int ans=0;
  vector<int> v;
  for(int i=0;i<n;i++){
    if(s[i]!='\\') continue;
    int h=0,tmp=0;
    for(int j=i;j<n;j++){
      if(s[j]=='/') h--;
      if(s[j]=='_') tmp+=h*2;
      else tmp+=h*2+1;
      if(s[j]=='\\') h++;
      //cout<<j<<":"<<h<<" "<<tmp<<endl;
      if(s[j]!='/') continue;
      if(h==0){
	ans+=tmp/2;
	v.push_back(tmp/2);
	i=j;
	break;
      }
    }
  }
  cout<<ans<<endl;
  cout<<v.size();
  for(int i=0;i<(int)v.size();i++) cout<<" "<<v[i];
  cout<<endl;
  return 0;
}