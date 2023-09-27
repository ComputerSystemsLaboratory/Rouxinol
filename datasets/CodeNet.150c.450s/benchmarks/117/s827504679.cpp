#include<stdio.h>
int a[6000000];
int n;
int sum=0;
void hebing(int a[],int q,int p,int l,int d){
  int i,j,k,b[n];
  i=q;
  j=l;
  k=q;
  while(i<=p&&j<=d){
    if(a[i]<a[j]){b[k++]=a[i++];sum++;}
    else {b[k++]=a[j++];sum++;}
  }
  while (i<=p){b[k++]=a[i++];sum++;}
  while (j<=d){b[k++]=a[j++];sum++;}
  for(int i=q;i<=d;i++){
    a[i]=b[i];
  }
}
void paixu(int a[],int m,int n){
    if(n>m){
int x=(n+m)/2;
paixu(a,m,x);
paixu(a,x+1,n);
hebing(a,m,x,x+1,n);
}
}
int main(){
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
paixu(a,0,n-1);
printf("%d",a[0]);
for(int i=1;i<n;i++){
    printf(" %d",a[i]);
}
printf("\n%d\n",sum);
return 0;
}