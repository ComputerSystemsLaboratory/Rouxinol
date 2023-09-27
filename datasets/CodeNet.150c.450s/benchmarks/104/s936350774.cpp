#include <stdio.h>
#include <stdlib.h>

int main(){
  int w,n,tmp,a,b;
  int i;
  int *arr;
  scanf("%d",&w);
  scanf("%d",&n);
  arr = (int *)calloc(w+1,sizeof(int));
  for(i=0;i<=w;i++)arr[i] = i;
  while(n){
    scanf("%d",&a);getchar();scanf("%d",&b);
    tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
    n--;
  }
  for(i=1;i<=w;i++)printf("%d\n",arr[i]);
}