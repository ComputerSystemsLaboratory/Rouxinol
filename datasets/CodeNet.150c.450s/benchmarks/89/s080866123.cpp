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
#define MAX_N 1000000
using namespace std;

int main(){
  bool tp[MAX_N] = {};
  tp[0] = tp[1] = 1;
  for(int i = 2; i <= MAX_N / 2; i++){
    if(!tp[i]){
      for(int j = i+i; j < MAX_N; j+=i) tp[j] = 1;
    }
  }
  //  rep(i, 100) if(!tp[i]) printf("%d ", i); puts("");
  vector<int>p;
  rep(i, MAX_N) if(!tp[i]) p.push_back(i);
      //  rep(i, 100) printf("%d ", p[i]);
  //  puts("");
  int a, b, n;
  while(scanf("%d%d%d", &a, &b, &n) && a+b+n){
    int i = 0;
    while(p[i] < a) i++;
    i--;
    while(n){
      i++;
      if((p[i] - a) % b == 0) n--;
    }
    printf("%d\n", p[i]);
  }
  return 0;
}