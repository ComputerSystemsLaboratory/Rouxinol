#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <map>
#include <queue>
#include <sstream>
using namespace std;

#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define mp(a,b) make_pair(a,b)
#define SZ(a) ((int)(a).size())
typedef pair<int,int> PI;

int a,l;

string i2s(int a){
  stringstream ss;
  ss << a;
  string r=ss.str();
  while(SZ(r)<l) r="0"+r;
  return r;
}

int s2i(string a){
  int r;
  stringstream ss(a);
  ss >> r;
  return r;
}


int next(int a){
  string b=i2s(a);

  sort(b.begin(),b.end());
  int bs=s2i(b);
  reverse(b.begin(),b.end());  

  int as = s2i(b);
  return max(as,bs) - min(as,bs);
}


void solve(){
  map<int,int> ai;
  int i=0;
  while(true){
    if(ai.count(a)){
      cout << ai[a] << " " << a << " " << i-ai[a] << endl;
      return;
    }
    ai[a]=i;
    ++i;
    a=next(a);
  }
}


int main(){

  while(cin >> a >> l && l) solve();
}