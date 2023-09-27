#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
int main(){
  int n;
  int Max = 24*3600+59*60+59;
  while(cin >> n,n){
    vector<int> v(Max+1,0);
    string s1,s2;
    rep(i,n){
     cin >> s1 >> s2;
     int sum1=0,sum2=0;
     for(int j=0; j<s1.size(); j+=3){
      if(j==0){
        sum1 += atoi(s1.substr(j,2).c_str())*3600;
        sum2 += atoi(s2.substr(j,2).c_str())*3600;
      }
      if(j==3){
        sum1 += atoi(s1.substr(j,2).c_str())*60;
        sum2 += atoi(s2.substr(j,2).c_str())*60;
      }
      if(j==6){
        sum1 += atoi(s1.substr(j,2).c_str());
        sum2 += atoi(s2.substr(j,2).c_str());
      }
     }
     v[sum1]++; v[sum2]--;
    }
    int ans = 0;
    rep(i,Max){
      v[i+1] += v[i];
      ans = max(ans,v[i+1]);
    }
    cout << ans << endl;
  }
  return 0;
}

