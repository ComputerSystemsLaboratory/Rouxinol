#include<stdio.h>
#include<stdlib.h>
void CountingSort(int*,int*,int);
int n;
int main() 
{
  int i,max=0;
  int *a,*b;

  scanf("%d",&n);
  a=(int*)malloc(sizeof(int)*(n+1));
  b=(int*)malloc(sizeof(int)*(n+1));
  for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
    if(a[i]>max) max = a[i];
  }

   CountingSort(a,b,max);
   for(i=1; i<=n; i++) {
     if(i>1) printf(" ");
     printf("%d",b[i]);
   }
  printf("\n");
  free(a);
  free(b);
  
  return 0;
}

void CountingSort(int a[],int b[],int k)
{
  int *c,i,j;
  
  c=(int*)malloc(sizeof(int)*(k+1));
  for(i=0; i<=k; i++) c[i]=0;
  
  for(j=1; j<=n; j++) c[a[j]]++;
  for(i=1; i<=k; i++) c[i]+=c[i-1];
  for(j=n; j>=1; j--) {
    b[c[a[j]]] = a[j];
    c[a[j]]--;
  }
  free(c);
}