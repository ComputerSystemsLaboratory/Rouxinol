#include<stdio.h>

#define N 2000

int a[N], n, sum;

int check(int i,int m){
  if(sum < m)return 0;
  if(m == 0)return 1;
  if(i >= n)return 0;
  return check(i+1,m) || check(i+1,m-a[i]);
}

int main(){
  int q,m,i;

  sum = 0;
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum+=a[i];
  }
  scanf("%d",&q);

  for(i=0;i<q;i++){
    scanf("%d",&m);
    if (check(0,m)){
      printf("yes\n");
    }else{
      printf("no\n");
    }

  }
  return 0;
}