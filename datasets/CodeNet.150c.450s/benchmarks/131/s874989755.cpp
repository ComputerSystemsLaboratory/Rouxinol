#include<bits/stdc++.h>
using namespace std;
int main(){
  
  string a;
  int L;
  while(1){
    cin >>a>>L;
    if(a == "0" && L==0)break;
    map<string,int> mp;
    mp[a]=0;
    int i=1;
    int ans1,ans2;
    while(1){
      while((int)a.size() < L){
	a="0"+a;
      }
      string smax=a,smin=a;
      sort(smax.begin(),smax.end());
      reverse(smax.begin(),smax.end());
      sort(smin.begin(),smin.end());
      stringstream ss1,ss2;
      ss1 << smax;
      ss2 << smin;
      int max,min;
      ss1 >> max;
      ss2 >> min;
      stringstream ss3;
      ss3 << max-min;
      ss3 >>a;
      if(mp.count(a) != 0){
	ans1=mp[a];
	ans2=i-ans1;
	break;
      }
      mp[a]=i;
      i++;
    }
    cout <<ans1<<" "<<a<<" "<<ans2<<endl;
  }
  
  return 0;
}