#include <stdio.h>
#define MAX 200000
#define INFTY 2000000000
double cnt=0;
void bubble(int *,int,int,int);
void bubbleSort(int *,int,int);

void bubble(int *A,int left,int mid,int right){
  int i,j,k;
  int x1,x2;
  int L[MAX],R[MAX];

  x1=mid-left;
  x2=right-mid;
  
  for(i=0;i<x1;i++){
    L[i]=A[left+i];
  }

  for(i=0;i<x2;i++){
    R[i]=A[mid+i];
  }

  L[x1]=INFTY;
  R[x2]=INFTY;

  i=0;
  j=0;
  
  for(k=left;k<right;k++){
    if(L[i]<R[j]){
      A[k]=L[i];
      i++;
    }else{
      A[k]=R[j];
      cnt=cnt+(x1-i);
      j++;
    }
  }
  
}

void bubbleSort(int *A,int left,int right){
  int middle;

  if(left+1<right){
    middle=(left+right+1)/2;
    bubbleSort(A,left,middle);
    bubbleSort(A,middle,right);
    bubble(A,left,middle,right);
  }
}

int main()
{
  int i,n,A[MAX];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
  }

  bubbleSort(A,0,n);

  printf("%.0f\n",cnt);

  return 0;
}