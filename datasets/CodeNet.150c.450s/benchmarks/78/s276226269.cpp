#include<stdio.h>
#define N 1000000

int all[N+1],odd[N+1];
int pollock[1000];
int num;

int BackTrack(int n,int type){
  int i,tmp,ans = N+1;
  if(type && odd[n]<=N)return odd[n];
  if(!type && all[n]<=N)return all[n];
  //if(n==0)return 0;

  for(i=num-1;i>=0;i--){
    //printf("%d\n",pollock[i]);
    if(pollock[i]>n)continue;
    if(type && !(pollock[i]&1) )continue;
    tmp = BackTrack(n-pollock[i],type);
    if(ans > tmp+1)ans = tmp+1;
  }

  if(type)odd[n] = ans;
  if(!type)all[n] = ans;
  return ans;
}

int main(){
  int i,n,tmp;

  for(i=0;i<=N;i++)all[i] = odd[i] = N+1;
  all[0] = odd[0] = 0;

  for(num=1;;num++){
    tmp = num*(num+1)*(num+2)/6;
    if(tmp>N)break;
    pollock[num-1] = tmp;
  }
  num--;
  while(scanf("%d",&n) && n){
    printf("%d %d\n",BackTrack(n,0),BackTrack(n,1));
  }
  return 0;
}