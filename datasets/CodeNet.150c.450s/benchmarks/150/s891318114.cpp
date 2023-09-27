#include<stdio.h>
#include<stdlib.h>

void CountingSort(int *a,int *b,int n,int k){
  int i,j,c[210000]={};

  for(j=1;j<=n;j++) c[a[j]]++;
  for(i=1;i<=k;i++) c[i] = c[i]+c[i-1];

  for(j=n;j>0;j--){
    b[c[a[j]]] = a[j];
    c[a[j]]--;
  }
}

int main(){
  int *a,*b;
  int n,i,k=0;
  
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*(n+1));
  b = (int *)malloc(sizeof(int)*(n+1));
  
  for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
    if(a[i]>k) k=a[i];
  }
  
  
  CountingSort(a,b,n,k);

  for(i=1;i<=n;i++){
    printf("%d",b[i]);
    if(i!=n) printf(" ");
    else printf("\n");
  } 
  

  return 0;
}

