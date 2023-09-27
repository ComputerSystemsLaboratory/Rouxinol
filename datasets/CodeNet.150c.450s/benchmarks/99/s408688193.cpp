#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>

#define rep(i,j) REP((i), 0, (j))
#define REP(i,j,k) for(int i=(j);(i)<(k);++i)
#define between(a,x,b) ((a)<=(x)&&(x)<=(b))
using namespace std;

int con(char str[16]){
  int ret = 0;
  stack<int> s;
  rep(i, strlen(str)){
    if( '0' <= str[i] && str[i] <= '9'){s.push(str[i]-'0');}
    else if(str[i] == 'm'){
      if(s.empty()) ret += 1000;
      else{ ret += 1000 * s.top(); s.pop();}
    }
    else if(str[i] == 'c'){ 
      if(s.empty()) ret += 100;
      else{ ret += 100 * s.top(); s.pop();}
    }
    else if(str[i] == 'x'){
      if(s.empty()) ret += 10;
      else{ ret += 10 * s.top(); s.pop();}
    }
    else if(str[i] == 'i'){
    if(s.empty()) ret += 1;
    else{ ret += s.top(); s.pop();}
    }
  }
  return ret;
}


int main(){
  int n;
  scanf("%d", &n);
  while(n--){
    char s1[16], s2[16];
    scanf("%s%s", s1, s2);
    int sum = con(s1) + con(s2);
    vector<char>res;
    if(sum/1000){
      if(sum/1000>1) res.push_back((sum/1000)+'0');
      res.push_back('m');
    }
    sum %= 1000;
    if(sum/100){
      if(sum/100>1) res.push_back((sum/100)+'0');
      res.push_back('c');
    }
    sum %= 100;
    if(sum/10){
      if(sum/10>1) res.push_back((sum/10)+'0');
      res.push_back('x');
    }
    sum %= 10;
    if(sum){
      if(sum>1) res.push_back((sum)+'0');
      res.push_back('i');
    }
    
    rep(i, res.size()) printf("%c", res[i]);
    puts("");
  }
  return 0;
}