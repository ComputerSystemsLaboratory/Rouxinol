#include <cstdio>
#include <iostream>
#include <algorithm>
  
using namespace std;
  
int main(void){
  int n,array[3],i;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d %d",&array[0],&array[1],&array[2]);
    sort(array,array+3);
    if(array[0]*array[0]+array[1]*array[1]==array[2]*array[2])  printf("YES\n");
    else  printf("NO\n");
  }
  
  return 0;
}