//Organize Your Train part ?
#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int main(){
  int n;
  cin>>n;
  while(n--){
    string s;
    map<string, int> mp;
    int ans=0;
    cin>>s;
    rep(i,s.length()){
      string t1="", t2="";
      rep(j,i)t1+=s[j];
      for(int j=i; j<s.length(); j++)t2+=s[j];
      if(mp.find(t1+t2)==mp.end()){ans++; mp[t1+t2]=1;}
      if(mp.find(t2+t1)==mp.end()){ans++; mp[t2+t1]=1;}
      reverse(t1.begin(), t1.end());
      if(mp.find(t1+t2)==mp.end()){ans++; mp[t1+t2]=1;}
      if(mp.find(t2+t1)==mp.end()){ans++; mp[t2+t1]=1;}
      reverse(t2.begin(), t2.end());
      if(mp.find(t1+t2)==mp.end()){ans++; mp[t1+t2]=1;}
      if(mp.find(t2+t1)==mp.end()){ans++; mp[t2+t1]=1;}
      reverse(t1.begin(), t1.end());
      if(mp.find(t1+t2)==mp.end()){ans++; mp[t1+t2]=1;}
      if(mp.find(t2+t1)==mp.end()){ans++; mp[t2+t1]=1;}
    }
    cout<<ans<<endl;
  }
  return 0;
}