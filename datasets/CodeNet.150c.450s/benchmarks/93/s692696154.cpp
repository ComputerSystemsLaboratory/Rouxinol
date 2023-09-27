#include <stdio.h>
#include <stdlib.h>

#define MAX 100001

typedef struct{
  char mark;
  int number;
  int sta;
} card;

int partition(card *, int, int);
void quicksort(card *, int, int);

int main(){

  int n, i, flag=0;
  card A[MAX];

  scanf("%d", &n);

  for(i=0; i<n; i++){
    scanf(" %c%d", &A[i].mark, &A[i].number);
    A[i].sta=i;
  }

  quicksort(A, 0, n-1);

  for(i=0; i<n; i++){
    if(A[i].number == A[i+1].number){
      if(A[i].sta > A[i+1].sta){
        flag=1;
      }
    }
  }

  if(flag==0){
    printf("Stable\n");
  }else{
    printf("Not stable\n");
  }

  for(i=0; i<n; i++){
    printf("%c %d\n", A[i].mark, A[i].number);
  }

  return 0;
}

int partition(card *A, int p, int r){
  int x, i, j;
  card trmp1, trmp2;

  x=A[r].number;
  i=p-1;

  for(j=p; j<=r-1; j++){
    if(A[j].number<=x){
      i=i+1;
      trmp1=A[i];
      A[i]=A[j];
      A[j]=trmp1;
    }
  }

  trmp2=A[i+1];
  A[i+1]=A[r];
  A[r]=trmp2;

  return i+1;
}

void quicksort(card *A ,int p, int r){
  int q;

  if(p<r){
    q=partition(A, p, r);
    quicksort(A, p, q-1);
    quicksort(A, q+1, r);
  }
}