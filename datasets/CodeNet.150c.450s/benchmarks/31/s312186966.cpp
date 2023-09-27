#include <stdio.h>
#include <limits.h>

using namespace std;

int main(){
  int n,tmp,min=INT_MAX,max=INT_MIN;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&tmp);
    if(max<tmp-min) max=tmp-min;
    if(min>tmp) min=tmp;
  }
  printf("%d\n",max);
  return 0;
}
  
