#include<cstdio>
int main(){
  bool flag[30];
  for(int i=0;i<30;i++) flag[i] = false;
  for(int i=0;i<28;i++){
    int x;
    scanf("%d",&x);
    flag[--x] = true;
  }
  for(int i=0;i<30;i++) if(!flag[i]) printf("%d\n",i+1);
  return 0;
}