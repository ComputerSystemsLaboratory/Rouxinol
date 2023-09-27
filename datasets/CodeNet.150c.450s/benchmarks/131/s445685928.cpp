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
  int n, l, asc, desc;
  while(scanf("%d%d", &n, &l) && (n || l)){
    vector<int>a;
    a.push_back(n);
    int i = 1, j;
    bool f = false;
    while(1){
      char s[8];
      sprintf(s, "%06d", a.back());
      //      puts(s);
      sort(s, s+6, greater<int>()); s[l] = '\0';
      //      puts(s);
      desc = atoi(s);
      sort(s, s+l);
      //      puts(s);
      asc = atoi(s);
      //      printf("%d %d %d\n", asc, desc, desc - asc);
      for(j = 0; j < a.size();++j) if(a[j] == desc - asc){ f= true;break;}
      if(f) break;
      a.push_back(desc - asc);
      i++;
    }
    printf("%d %d %d\n", j, desc-asc,i-j);
  }
  return 0;
}