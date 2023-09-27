#include <iostream>
#include <stdio.h>

using namespace std;

static const int Nmax = 36;

typedef struct Card{
  char suit;
  char value;
} playcard;

void swap(playcard* a, playcard* b)
{
  playcard p = *a;
  *a = *b;
  *b = p;
  return ;
}

void printcards(playcard* array,int length)
{
  for(int i = 0; i < length-1; i++)
  {
    printf("%c%c ",array[i].suit,array[i].value);
  }
  printf("%c%c\n",array[length-1].suit,array[length-1].value);
}

int bubblesort(playcard* A, int N)
{
  int sc = 0;
  for(int i = 0; i < N-1; i++)
  {
    for (int j = N-1 ; j > i; j--)
    {
      if(A[j].value < A[j-1].value)
      {
        swap(&A[j],&A[j-1]);
        sc++;
/*内側のloopサイクルでswapしなかったら全て順番通りに並んでいるので特に問題なく進めます。*/
      }
    }
  }
  return sc;
}

int selectionsort(playcard* A, int N){
  int i;
  int sc = 0;
  for (i = 0; i < N; i++){
    int min_index = i;
    int j;
    for(j = i; j < N; j++){
      if(A[j].value < A[min_index].value){
        min_index = j;
      }
    }
    if (min_index != i){
      swap(&A[i],&A[min_index]);
      sc++;
    }
  }
  return sc;
}

bool eq(playcard A, playcard B){
  if((A.suit == B.suit) & (A.value == B.value))return true;
  return false;
}

bool isStable(playcard* input, playcard* output,int N){
  for(int i = 0; i < N-1;i++){
    for(int j = i+1; j < N ; j++){
      for(int a = 0; a < N-1; a++){
        for(int b = a+1; b < N; b++){
          if((input[i].value == input[j].value) & eq(input[i],output[b]) & eq(input[j],output[a])){
            return false;
          }
        }
      }
    }
  }
  return true;
}

int main(){
  int N;
  playcard A[Nmax],bubble[Nmax],selection[Nmax];
  cin >> N;
  for(int i = 0; i < N ; i++){
    getchar();
    A[i].suit = getchar();
    A[i].value = getchar();
    //printf("%c\n",A[i].suit);
    //printf("%c\n",A[i].value);
    bubble[i] = A[i];
    selection[i] = A[i];
  }
  //printcards(A,N);
  bubblesort(bubble,N);
  selectionsort(selection,N);

  printcards(bubble,N);
  if(isStable(A,bubble,N)){
    printf("Stable\n");
  }
  else{
    printf("Not stable\n");
  }
  printcards(selection,N);
  if(isStable(A,selection,N)){
    printf("Stable\n");
  }
  else{
    printf("Not stable\n");
  }
}

