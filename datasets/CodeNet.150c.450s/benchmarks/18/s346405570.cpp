#include<iostream>
#include<cstdio>
#include<cmath>

int main(){
  int n,ans;
  double total;
  double check;

  scanf("%d",&n);
  total = 100000.0;
  for(int i=0;i<n;i++){
    total = total*1.05;
    check = ceil(total/1000.0);
    total = check*1000.0;
  }

  ans = total;
  printf("%d\n",ans);

  return 0;
}