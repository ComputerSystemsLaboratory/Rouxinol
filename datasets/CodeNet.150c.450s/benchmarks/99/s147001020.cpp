#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <fstream>
#include <complex>
#include <stack>
#include <queue>

using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
static const double EPS = 1e-5;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)
int cti(char c){
  if(c=='m')return 1000;
  if(c=='c')return 100;
  if(c=='x')return 10;
  else return 1;
}
int sti(string s){
  int tmp=1;
  int ret = 0;
  FOR(i,0,s.size()){
    if(s[i]<='9'&&s[i]>='1'){
      tmp = s[i]-'0';
    }else{
      ret += tmp*cti(s[i]);
      tmp = 1;
    }
  }
  return ret;
}
string its(int n){
  string charset = "mcxi";
  string ret;
  int d[4];
  REP(i,4){
    d[i] = n%10;
    n/=10;
  }
  REP(i,4){
    if(d[3-i]>1) ret+=(char)(d[3-i]+'0');
    if(d[3-i]>0) ret+=charset[i];
  }
  return ret;
}

int main(void){
  int N;
  cin>>N;
  while(N--){
    string a,b;
    cin>>a>>b;
    int sum = sti(a) + sti(b);
    cout<<its(sum)<<endl;
  }

  return 0;
}