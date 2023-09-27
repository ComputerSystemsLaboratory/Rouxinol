#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

int McxiToInt(std::string s){
  int result=0;
  int last_digit=1;
  for(auto c:s){
    if('2'<=c&&c<='9'){
      last_digit=c-'0';
    }else if(c=='m'){
      result+=last_digit*1000;
      last_digit=1;
    }else if(c=='c'){
      result+=last_digit*100;
      last_digit=1;
    }else if(c=='x'){
      result+=last_digit*10;
      last_digit=1;
    }else if(c=='i'){
      result+=last_digit*1;
      last_digit=1;
    }
  }
  return result;
}

std::string IntToMcxi(int n){
  std::string result;
  int m=0,c=0,x=0,i=0;
  while(n>=1000){
    n-=1000;
    m++;
  }
  if(m>=2){
    result+=(m+'0');
    result+='m';
  }else if(m==1){
    result+='m';
  }
  while(n>=100){
    n-=100;
    c++;
  }
  if(c>=2){
    result+=(c+'0');
    result+='c';
  }else if(c==1){
    result+='c';
  }
  while(n>=10){
    n-=10;
    x++;
  }
  if(x>=2){
    result+=(x+'0');
    result+='x';
  }else if(x==1){
    result+='x';
  }
  while(n>=1){
    n-=1;
    i++;
  }
  if(i>=2){
    result+=(i+'0');
    result+='i';
  }else if(i==1){
    result+='i';
  }
  return  result;
}

std::string Solve(std::string a,std::string b){
  int x=McxiToInt(a),y=McxiToInt(b);
  return IntToMcxi(x+y);
}

int main(void) {
  cout << std::fixed << std::setprecision(10);
  cin.tie(0);
  std::ios::sync_with_stdio(false);

  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    std::string a,b;
    cin>>a>>b;
    cout<<Solve(a,b)<<endl;
  }

  return 0;
}

