#include <bits/stdc++.h>
using namespace std;

int main(){
  string str;
  cin>>str;
  stack <int> stk,sstk,h,ans;  
  int cnt=0,sum=0;
  str+='\\';
  for(int i=0;i<str.size();i++){
    if(str[i]=='\\')stk.push(i);
    if(stk.size()&&str[i]=='/')cnt+=i-stk.top(),stk.pop();
    if(str[i]=='\\'&&cnt){
      sum+=cnt;
      while(h.size()&&h.top()>stk.size())cnt+=sstk.top(),sstk.pop(),h.pop();
      sstk.push(cnt);
      h.push(stk.size());
      cnt=0;
    }
  }
  while(!sstk.empty())ans.push(sstk.top()),sstk.pop();
 
  cout <<sum<<endl<<ans.size();
  while(!ans.empty())cout <<" "<<ans.top(),ans.pop();
  cout <<endl;
}