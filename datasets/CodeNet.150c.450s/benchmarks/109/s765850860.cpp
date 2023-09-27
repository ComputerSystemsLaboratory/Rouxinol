#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(cin>>n,n){
    string s,t;
    int tim[100000]={};
    for(int i=0;i<n;i++){
      cin>>s>>t;
      int h=(s[0]-'0')*10+(s[1]-'0');
      int m=(s[3]-'0')*10+(s[4]-'0');
      int k=(s[6]-'0')*10+(s[7]-'0');
      int hh=(t[0]-'0')*10+(t[1]-'0');
      int mm=(t[3]-'0')*10+(t[4]-'0');
      int ss=(t[6]-'0')*10+(t[7]-'0');
      tim[h*60*60+m*60+k]++;
      tim[hh*60*60+mm*60+ss]--;
    }
    int ans=0;
    for(int i=1;i<100000;i++){
      tim[i]+=tim[i-1];
      ans=max(tim[i],ans);
    }
    cout<<ans<<endl;
  }
  return 0;
}

