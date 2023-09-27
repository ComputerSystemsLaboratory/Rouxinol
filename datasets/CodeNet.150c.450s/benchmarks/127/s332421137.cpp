#include<bits/stdc++.h>
using namespace std;
int main(){
  int m; cin>>m;
  while(m--){
    string s,t,u;
    set<string> a;
    cin>>s;
    for(int i=1;i<s.size();++i)
      for(int j=0;j<8;++j){
        t=s.substr(0,i),u=s.substr(i);
        if(j%2) reverse(t.begin(),t.end());
        if(j%4>1) reverse(u.begin(),u.end());
        if(j>3) swap(t,u);
        a.insert(t+u);
      }
    cout<<a.size()<<endl;
  }
  return 0;
}