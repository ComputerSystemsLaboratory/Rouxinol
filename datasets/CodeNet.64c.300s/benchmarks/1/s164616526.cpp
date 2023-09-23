#include<stdio.h>
int partition(int *a,int p,int r){
  int x;
  int i,j,temp;

  x = a[r];
  i = p-1;
  for(j=p;j<r;j++){
    if(a[j]<=x){
      i++;
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
    }
  }
 temp = a[i+1];
 a[i+1] = a[r];
 a[r] = temp;
  
  return i+1;
}

int main(){
  int p,n,a[110000];
  int i;
  
  scanf("%d",&n);
  for(i=0;i<n;i++) scanf("%d",&a[i]);
  p = partition(a,0,n-1);
  for(i=0;i<n;i++){
    if(i==p) printf("[%d]",a[i]);
    else printf("%d",a[i]);
    if(i==n-1) printf("\n");
    else printf(" ");
  }

  return 0;
}

