#include <bits/stdc++.h>

struct CARD {
  char mark;
  char num;
  int index;
};


void selectionSort(CARD* A, int N){
  int minj;

  for(int i = 0; i < N - 1; i++){
    minj = i;
    for(int j = i; j < N; j++){
      if(A[j].num < A[minj].num)
        minj = j;
    }

    if(minj != i){
      CARD tmp = A[i];
      A[i] = A[minj];
      A[minj] = tmp;
    }
  }

  return;
}

void bubbleSort(CARD* A, int N){

  bool flag = true;

  while(flag){
    flag = false;

    for(int i = N-1; i > 0; i--){
      if(A[i].num < A[i-1].num){
        CARD tmp = A[i];
        A[i] = A[i -1];
        A[i-1] = tmp;
        flag = true;
      }
    }
  }

  return;
}

void showA(CARD* A, int N){
  for(int i = 0; i < N; i++){
    if(i < N-1)
      std::cout << A[i].mark << A[i].num << ' ';
    else
      std::cout << A[i].mark << A[i].num << std::endl;
  }
    return;
}

void checkA(CARD* A, int N){
  bool flag = true;

  for(int i = 0; i < N; i++){
    for(int j = i+1; j < N; j++){
      if(A[i].num == A[j].num && A[i].index > A[j].index)
        flag = false;
    }
  }

  if(flag)
    std::cout << "Stable" << std::endl;
  else
    std::cout << "Not stable" << std::endl;

  return;
}

int main(){
  int N;

  std::cin >> N;

  CARD* A = new CARD[N];
  CARD* B = new CARD[N];
  for(int i = 0; i < N; i++){
    std::cin >> A[i].mark >> A[i].num;
    A[i].index = i;
  }

    for(int i = 0; i < N; i++){
    B[i].mark = A[i].mark;
    B[i].num = A[i].num;
    B[i].index = A[i].index;
  }


  bubbleSort(A, N);
  showA(A, N);
  checkA(A, N);

  selectionSort(B, N);
  showA(B, N);
  checkA(B, N);

  return 0;
}