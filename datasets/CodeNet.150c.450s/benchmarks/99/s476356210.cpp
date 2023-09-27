#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define CH(N,A,B) (A<=N&&N<B)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define RREP(i,a,b) for(int i=(b-1);a<=i;i--)

using namespace std;

map< char, int > m;
map< int, string > mm;

int sToi(string s){
  int ret = 0;
  REP(i,0,s.size()){
    int tmp = 1;
    if(isdigit(s[i])){
      ret += (s[i] - '0') * m[s[i+1]];
      i++;
    }else{
      ret += m[s[i]];
    }
  }
  return ret;
}

string iTos(int num){
  string s = "";
  int tmp = 1000;
  REP(i,0,4){
    if(num / tmp > 1) s += to_string(num / tmp) + mm[tmp];
    else if(num / tmp == 1) s += mm[tmp];
    num %= tmp;
    tmp /= 10;
  }
  return s;
}

int main() {

  int n;
  cin>>n;

  m['i'] = 1;
  m['x'] = 10;
  m['c'] = 100;
  m['m'] = 1000;

  mm[1] = "i";
  mm[10] = "x";
  mm[100] = "c";
  mm[1000] = "m";

  REP(i,0,n){
    string s1, s2;
    cin>>s1>>s2;
    cout<<iTos(sToi(s1) + sToi(s2))<<endl;
  }

  return 0;
}