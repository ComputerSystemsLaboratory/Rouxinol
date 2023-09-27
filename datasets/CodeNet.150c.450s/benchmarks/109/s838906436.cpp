#include <bits/stdc++.h>

using namespace std;

int exchange(string s){
  int res=0;
  res = (s[0]-48)*36000+(s[1]-48)*3600+(s[3]-48)*600+(s[4]-48)*60+
        (s[6]-48)*10+(s[7]-48);
  return res;
}
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  while(cin >> n,n){
    int time[900000]={0};
    for(int i=0;i<n;i++){
      string s1,s2;cin >>s1>>s2;
      int start=exchange(s1),end=exchange(s2);
      time[start]++;time[end]--;
    }
    for(int i=1;i<900000;i++) time[i]+=time[i-1];
    int res=-1;
    for(int i=0;i<900000;i++) res=max(res,time[i]);
    cout << res << endl;
  }
}