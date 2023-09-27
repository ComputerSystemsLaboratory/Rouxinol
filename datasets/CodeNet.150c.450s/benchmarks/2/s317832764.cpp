#include <stdio.h>

int n,x;

void swap(int *a,int *b){
  int comp;
  comp = *a;
  *a = *b;
  *b = comp;
}

		

void partition(int *a,int p,int r){
  int i,j,k;
  x = a[r];
  i = 0;

  for(j = p;j < r;j++){
    if(a[j] <= x){
      swap(&a[i],&a[j]);
       i++;
    }
  }
  swap(&a[i],&a[r]);
}

int main(){

  int i,j,sw = 0;
  int a[100001] = {};

  scanf("%d",&n);
  for(i = 0;i < n;i++) scanf("%d",&a[i]);

  partition(a,0,n - 1);

  for(i = 0;i < n;i++) {
    if(a[i] != x) printf("%d",a[i]);
    else {
      for(j = i + 1;j < n;j++){
	if(a[j] == x){
	  sw = 1;
	break;
	}
      }
      // printf("sw = %d\n",sw);
      if(sw == 1) printf("%d",a[i]);
      else printf("[%d]",a[i]);
      sw = 0;
    }
   
    if(i != n - 1) printf(" ");
  }
  printf("\n");
  return 0;
}