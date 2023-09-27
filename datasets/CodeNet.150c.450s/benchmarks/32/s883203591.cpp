//#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <algorithm>
#define ll long long
#define all(a) (a).begin(),(a).end()

int main(int argc, char const *argv[]) {
  while(1){
    int m=0,nmin=0,nmax=0;
    scanf("%d%d%d",&m,&nmin,&nmax);
    if(m==0 && nmin==0 && nmax==0){
      break;
    }
    std::vector<int> p(m+1);
    for (int i = 1; i <= m; i++) {
      scanf("%d",&p[i]);
    }
    int temp=0,memo=0,memoid=0;
    for (int i = nmin; i <= nmax; i++) {
      temp=p[i]-p[i+1];
      memo=std::max(memo,temp);
      if(memo==temp) memoid=i;
    }
    p.erase(all(p));
    printf("%d\n",memoid);
  }
  return 0;
}