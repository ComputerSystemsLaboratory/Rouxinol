#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
map<char,int> tbl;
map<int,char> tbl2;
bool isnum(char c){
  return '0'<=c && c<='9';
}
int decode(string s){
  int ret = 0;
  for(int i=0;i<s.length();++i){
    int t = 1;
    if(!isnum(s[i])){
      if(i>0 && isnum(s[i-1])) t = s[i-1]-'0';
      ret+=t*tbl[s[i]];
    }
  }
  return ret;
}
string code(int x){
  string ret("");
  int c = 0;
  while(x){
    int d = x%10;
    if(d){
      ret+=tbl2[c];
      if(d>1) ret+=(char)(d+'0');
    }
    ++c;
    x/=10;
  }
  reverse(ret.begin(), ret.end());
  return ret;
}
int main(){
  int n;
  cin>>n;
  tbl['m'] = 1000;
  tbl['c'] = 100;
  tbl['x'] = 10;
  tbl['i'] = 1;
  tbl2[0] = 'i';
  tbl2[1] = 'x';
  tbl2[2] = 'c';
  tbl2[3] = 'm';
  
  while(n--){
    string a,b;
    cin>>a>>b;
    cout << code(decode(a)+decode(b)) << endl;
  }
  return 0;
}