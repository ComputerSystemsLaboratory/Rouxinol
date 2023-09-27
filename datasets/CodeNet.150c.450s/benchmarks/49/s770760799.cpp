#include <stdio.h>
#include <climits>
#include <iostream>
using namespace std;
int main(){
  int n,work;
  while(1){
    int sum = 0,max=0,min=INT_MAX;
    cin >> n;
    if(n==0) break;
    for(int i=0;i<n;i++){
      cin >> work;
      max = (max < work) ? work : max;
      min = (min > work) ? work : min;
      sum+=work;
    }
    sum -=max;
    sum -=min;
    printf("%d\n",sum/(n-2));
  }

  return 0;
}