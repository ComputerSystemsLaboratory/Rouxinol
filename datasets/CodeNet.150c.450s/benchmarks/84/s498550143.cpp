#include<stdio.h>
int a[200002];
int b[200000];
int c[200000];
long long hebing(int a[],int left,int mid,int right){
int s1=mid-left;
int s2=right-mid;
long long num=0;
int i,j;
for(i=0;i<s1;i++)b[i]=a[left+i];
for(i=0;i<s2;i++)c[i]=a[mid+i];
b[s1]=c[s2]=2000000000;
i=j=0;
for(int k=left;k<right;k++){
    if(b[i]<=c[j])
    a[k]=b[i++];

else {
    a[k]=c[j++];
    num+=s1-i;
}
}
return num;
}
long long hbpx(int a[],int p,int q){
int mid;
long long n1,n2,n3;
  if(p+1<q){
    mid=(p+q)/2;
    n1= hbpx(a,p,mid);
    n2=hbpx(a,mid,q);
    n3=hebing(a,p,mid,q);
  return n1+n2+n3;
  }
else return 0;
}
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
long long x = hbpx(a,0,n);
printf("%lld\n",x);
return 0;
}