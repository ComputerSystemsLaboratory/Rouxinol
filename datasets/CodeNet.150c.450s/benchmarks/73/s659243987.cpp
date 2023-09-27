#include <bits/stdc++.h>

int N;
int bit[1000010];
void add(int a, int w) {
  for (int x = a; x <= N; x += x & -x) bit[x] += w;
}
int sum(int a) {
  int ret = 0;
  for (int x = a; x > 0; x -= x & -x) ret += bit[x];
  return ret;
}

int main(){
  scanf("%d",&N);
  int Q;
  scanf("%d",&Q);
  for(int i=0;i<Q;i++){
    int com,x,y;
    scanf("%d%d%d",&com,&x,&y);
    if(com==0){
      add(x,y);
    }else if(com==1){
      int ans = sum(y) - sum(x-1);
      printf("%d\n",ans);
    }
  }
  return 0;
}
