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

int main(){
  bool f = true;
  int n, m;
  string tmp;
  char in[16];
  scanf("%d", &n);
  vector<string>str(n);
  rep(i, n){
    scanf("%s", in);
    str.push_back(string(in));
  }
  scanf("%d", &m);
  rep(i, m){
    scanf("%s", in);
    if(find(str.begin(), str.end(), in) != str.end()){
      if(f) printf("Opened by %s\n", in), f = 0;
      else printf("Closed by %s\n", in), f = 1;
    }else printf("Unknown %s\n", in);
  }
  return 0;
}