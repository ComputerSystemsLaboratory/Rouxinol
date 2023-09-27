#include <stdio.h>




int ans=0;

int a[500001];

int n;




void merge(int left,int mid,int right)

{

 int i,j,k;




 int n1=mid-left;

 int n2=right-mid;

 

 int l[n1+1],r[n2+1];




 for(i=0;i<n1;i++){

  l[i]=a[left+i];

 }

 for(i=0;i<n2;i++){

  r[i]=a[mid+i];

 }




 l[n1]=1000000001;

 r[n2]=1000000001;

 i=0;

 j=0;




 for(k=left;k<right;k++){

  ans++;

  if(l[i]<=r[j])

   a[k]=l[i++];

  else

   a[k]=r[j++];

 }

}




void mergeSort(int left,int right)

{

 int mid;




 if(left+1<right){

  mid=(left+right)/2;

  mergeSort(left,mid);

  mergeSort(mid,right);

  merge(left,mid,right);

 }

}




int main(void)

{

 int i;




 scanf("%d",&n);

 for(i=0;i<n;i++){

  scanf("%d",&a[i]);

 }

 

 mergeSort(0, n);




 for(i=0;i<n-1;i++){

  printf("%d ",a[i]);

 }

 printf("%d\n",a[n-1]);

 printf("%d\n",ans);




 return 0;

}