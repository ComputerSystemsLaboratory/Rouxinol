#include <bits/stdc++.h>
using namespace std;

int main(){
  while(true){
    int n,m,p;
    scanf("%d%d%d",&n,&m,&p);
    if(n+m+p==0)return 0;
    int sum = 0;
    int win = 0;
    for(int i=0;i<n;i++){
      int x;
      scanf("%d",&x);
      sum += x;
      if(i==m-1)win = x;
    }
    sum *= 100;
    p = 100 - p;
    // ans = sum * p / 100 / win
    if(win == 0){
      puts("0");
    }else{
      int ans = sum * p / (100 * win);
      printf("%d\n",ans);
    }
  }
}
