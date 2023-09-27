#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<stack>
#include<bitset>
#include<map>
using namespace std;

string list[]={".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};


string s;
bool input(){
  s="";
  if(!(cin>>s)){
    return false;
  }
  return true;
}


string solve(){
  string res = "";
  int n=-1;
  for(int i=0;i<s.size();i++){
    if(s[i]=='0'){
      if(n==-1||i==0)continue;
      int tmp = s[i-1]-'0';
      res += list[tmp-1][n%list[tmp-1].size()];
      n=-1;
    }else{
      n++;
    }
  }
  return res;
}

int main(){
  int c;
  cin>>c;
  for(int i=0;i<c;i++){
    input();
    string ans = solve();
    if(ans.size()!=0)cout<<ans<<endl;
  }
}