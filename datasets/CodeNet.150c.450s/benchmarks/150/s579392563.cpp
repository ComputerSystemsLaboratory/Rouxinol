#include<stdio.h>

#define N 2000001

int n;

void Counting_Sort(int a[],int b[],int k){
  int i, j, c[N];

  for(i=0; i<=k; i++) c[i]=0;

  for(j=1; j<=n; j++) c[a[j]]++;

  for(i=1; i<=k ;i++) c[i]+=c[i-1];

  for(j=n; j>0; j--) {
    b[c[a[j]]]=a[j];
    c[a[j]]--;
  }
  for(i=1;i<=n;i++){
    printf("%d",b[i]);
    if(i!=n) printf(" ");
  }
  printf("\n");
 

}


int main(){
  int i,  max=0;
 static  int a[N],b[N];
  scanf("%d",&n);

  for(i=1; i<=n; i++){
    scanf("%d",&a[i]);
    if(a[i]>max)  max=a[i];
  }
  
  Counting_Sort(a,b,max);
   

  return 0;
}