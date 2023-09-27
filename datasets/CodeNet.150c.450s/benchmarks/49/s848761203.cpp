#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, s, maxn, minn;

  while(1){
    scanf("%d", &n);
    if(n==0) break;

    maxn=0;
    minn=1000;
    int x=0;
    for(int i=0;i<n;i++){
      scanf("%d", &s);
      x+=s;
      maxn=max(s,maxn);
      minn=min(s,minn);
    }

    printf("%d\n",(x-maxn-minn)/(n-2) );
  }
  return 0;
}