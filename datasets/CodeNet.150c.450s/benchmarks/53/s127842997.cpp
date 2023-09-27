#include<queue>
#include<math.h>
#include<cmath>
#include<bitset>
#include<stdio.h>
#include<string>
#include<map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<utility>
using namespace std;
int main(){
  int n,i;
  scanf("%d\n",&n);
  printf("%d:",n);
  for(i=2;i*i<=n;i++){
    while(n%i==0){
      printf(" %d",i);
      n=n/i;
    }
  }
  if(n!=1){
    printf(" %d",n);
  }
  printf("\n");
}
