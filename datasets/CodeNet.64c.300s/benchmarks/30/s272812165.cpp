#include<cstdio>

int c[] = {500,100,50,10,5,1};

int solve(){
  int x,ans = 0;
  scanf("%d",&x);
  if(x==0) return 1;
  x = 1000-x;
  for(int i=0;i<6;i++){
    ans+=x/c[i];
    x%=c[i];
  }
  printf("%d\n",ans);
  return 0;
}

int main(){
  while(true) if(solve()) return 0;
}