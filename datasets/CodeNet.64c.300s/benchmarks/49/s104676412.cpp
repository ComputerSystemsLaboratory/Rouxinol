//Digit Number
#include<bits/stdc++.h>

int digit(long long x){
  int i=1;
  while(true){
    x/=10;
    if(x==0)break;
    i++;
  }
  return i;
}

int main(){
  long long  a, b;
  while(scanf("%lld %lld", &a, &b)!=EOF){
    printf("%d\n", digit(a+b));
  }
  return 0;
}