#include <stdio.h>
using namespace std;

int main(){
  int i0,i1,i2,i3,i4,i5;

  scanf("%d%d%d%d",&i0,&i1,&i2,&i3);  
  i4 = i0 + i1 + i2 + i3;

  scanf("%d%d%d%d",&i0,&i1,&i2,&i3);
  i5 = i0 + i1 + i2 + i3;

  if(i4 == i5) printf("%d\n",i4);
  else{  
    if(i4 < i5) printf("%d\n",i5);
    else printf("%d\n",i4);
  } 
}