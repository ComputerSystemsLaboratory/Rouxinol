#include <cstdio>
#include <algorithm>
  
using namespace std;
  
int main(void){
  int i,array[10];
  
  for(i=0;i<10;i++)  scanf("%d",&array[i]);
  sort(array,array+10);
  for(i=9;i>=7;i--)  printf("%d\n",array[i]);
  
  return 0;
}
 