#include<stdio.h>
#include<limits.h>

#define rep(i,n) for(i=0;i<(n);i++)
#define For(i,a,b) for(i=(a);i<(b);i++)
#define size 500000

int count=0;

void merge(int a[],int left,int mid,int right){
  int n1=mid-left,n2=right-mid;
  int l[n1+1],r[n2+1];
  int i,j,k;
  rep(i,n1)
    l[i]=a[left+i];
  rep(i,n2)
    r[i]=a[mid+i];
  l[n1]=INT_MAX;
  r[n2]=INT_MAX;
  i=0;j=0;
  For(k,left,right){
    if(l[i]<=r[j]){
      a[k]=l[i];
      //printf("%d\n",a[k]);
      i++;
    }else{
      a[k]=r[j];
      //printf("%d\n",a[k]);
      j++;
    }
    count++;
  }  
}

void mergesort(int a[],int l,int r){
  int m;
  if(l+1<r){
    m=(l+r)/2;
    mergesort(a,l,m);
    mergesort(a,m,r);
    merge(a,l,m,r);
  }
}

int main(){
  int n,s[size];
  int i,j,k,l;

  scanf("%d",&n);
  rep(i,n)
    scanf("%d",&s[i]);

  mergesort(s,0,n);
  rep(i,n){
    printf("%d",s[i]);
    if(i==n-1){
      printf("\n");
    }else{
      printf(" ");
    }
  }
  printf("%d\n",count);

  return 0;

}