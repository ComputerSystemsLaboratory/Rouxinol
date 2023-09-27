#include<stdio.h>

void insertionSort(int A[101],int N) // N個の要素を含む0-オリジンの配列A
{
int v;
   for(int i=0;i<N;i++)
 {    v = A[i];
  int   j = i - 1;
     while (j >= 0 &&A[j] > v)
{
       A[j+1] = A[j];
       j--;
     A[j+1] = v;
}
for(int k=0;k<N-1;k++)
printf("%d ",A[k]);
printf("%d\n",A[N-1]);
}
}

int main(){
int N,x;
int A[101]={};
scanf("%d",&N);
for(int i=0;i<N;i++){
scanf("%d",&x);A[i]=x;}
insertionSort(A,N);
return 0;
}