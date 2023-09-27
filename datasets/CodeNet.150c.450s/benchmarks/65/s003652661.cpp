#include<stdio.h>

struct Card{
  char suit;
  char value;
};


void BubbleSort(struct Card *A, int length) {

  int i, j;
  char tmp;
  char tmp1;

  for(i = 0; i < length; i++) {
    for(j = length-1; j > i; j--) {
      if(A[j].value < A[j-1].value) {

	tmp = A[j].value;
	tmp1 = A[j].suit;

	A[j].value = A[j-1].value;
	A[j].suit = A[j-1].suit;

	A[j-1].value = tmp;
	A[j-1].suit = tmp1;

      }
    }
  }
}

void SelectionSort(struct Card *A,int length) {

  int i, j, mini;
  char tmp;
  char tmp1;

  for(i = 0; i < length; i++) {
    mini = i;
    for(j = i; j < length; j++) {
      if(A[j].value < A[mini].value) {
	mini = j;
      }
    }
    if(i != mini) {
    tmp = A[i].value;
    tmp1 = A[i].suit;

    A[i].value = A[mini].value;
    A[i].suit = A[mini].suit;

    A[mini].value = tmp;
    A[mini].suit = tmp1;

    }
  }
}



int main(){
  struct Card C1[101], C2[101];
  char table[9][4]={};
  int c[9]={};

  int n, i,j,f=0;
  char ch;

  scanf("%d%c", &n, &ch);
  for ( i = 0; i < n; i++ ){
    scanf("%c%c%c", &C1[i].suit, &C1[i].value, &ch);
    table[C1[i].value-'1'][c[C1[i].value-'1']]=C1[i].suit;
    c[C1[i].value-'1']++;
  }
  for(i = 0; i < n; i++) {

    C2[i].suit = C1[i].suit;
    C2[i].value = C1[i].value;
  }

  BubbleSort(C1, n);
  SelectionSort(C2, n);


  for(i=0;i<9;i++)c[i]=0;

  if(table[C1[0].value-'1'][c[C1[0].value-'1']++]!=C1[0].suit)
    {
      f=1;
    }
  printf("%c%c", C1[0].suit, C1[0].value);
  for(i = 1; i < n; i++) {
  if(table[C1[i].value-'1'][c[C1[i].value-'1']++]!=C1[i].suit)
    {
      f=1;
    }
  printf(" %c%c", C1[i].suit, C1[i].value);
  }

  if(f==0)
    printf("\nStable\n");
  else
    printf("\nNot stable\n");

  for(i=0;i<9;i++)c[i]=0;
  f=0;

  if(table[C2[0].value-'1'][c[C2[0].value-'1']++]!=C2[0].suit)
    {
      f=1;
    }


 printf("%c%c", C2[0].suit, C2[0].value);
  for(i = 1; i < n; i++) {
  if(table[C1[i].value-'1'][c[C1[i].value-'1']++]!=C2[i].suit)
    {
      f=1;
    }
  printf(" %c%c", C2[i].suit, C2[i].value);
  }

  if(f==0)
    printf("\nStable\n");
  else
    printf("\nNot stable\n");

  return 0;
}