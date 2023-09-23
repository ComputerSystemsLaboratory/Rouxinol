#include <stdio.h>
#define MAX 500000
int A[MAX];
int H;
void maxheap(int *,int);

int main(){
int i;
  scanf("%d",&H);
  for (i = 1; i <= H; i++ ) {
    scanf("%d",&A[i]);
  }
  for (i = H/2 ; i > 0 ; i-- ){
    maxheap(A,i);
  }
  for (i=1 ; i<=H ;i++){
    printf(" %d",A[i]);
  }
  puts("");

  return 0;

}

void maxheap(int A[],int i){

  int l,r;
  int large,temp;

  l=i*2;
  r=i*2+1;

  if (l<=H && A[l]>A[i])large=l;
  else large=i;

  if (r<=H && A[r]>A[large])large=r;

  if(large!=i){
    temp=A[i];
    A[i]=A[large];
    A[large]=temp;
    maxheap(A,large);
  }
}