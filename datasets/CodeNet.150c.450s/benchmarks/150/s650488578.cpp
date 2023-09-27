#include <stdio.h>
#include<stdlib.h>
#define CMAX 10000

int main(){
  int i,j,n;
  int *a,*b;
  int c[CMAX+1] = { };

  scanf("%d",&n);

  a = (int*)malloc(n*sizeof(int));
  b = (int*)malloc(n*sizeof(int));

  for( i=0 ; i<n ; i++ ){
    scanf("%d",&a[i]);
  }

  for( i=0 ; i<n ; i++ ){
    c[a[i]]++;
  }
  for( j=1 ; j<=CMAX ; j++ ){
    c[j] += c[j-1];
  }
  for( i=n-1 ; i>=0 ; i-- ){
    b[c[a[i]]-1] = a[i];
    c[a[i]]--;
  }
  
  for( j=0 ; j<n ; j++ ){
    printf("%d",b[j]);
    if( j != n-1 ) printf(" ");
  }
  printf("\n");

  free(a);
  free(b);

  return 0;
}