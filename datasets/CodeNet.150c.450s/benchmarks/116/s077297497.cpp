#include <cstdio>
int n,k;
int main(void){
  scanf("%d%d",&n,&k);
  while(n!=0){
    int i;
    int mem[100000]={0};
    for(i=0;i<n;i++){
      scanf("%d",&(mem[i]));
    }
    int ans=0;
    int now=0;
    for(i=0;i<k;i++){
      now+=mem[i];
      ans=now;
    }
    for(i=0;i+k<n;i++){
      now-=mem[i];
      now+=mem[i+k];
      ans=(ans<now)?now:ans;
    }
    printf("%d\n",ans);
    scanf("%d%d",&n,&k);
  }
  return 0;
}