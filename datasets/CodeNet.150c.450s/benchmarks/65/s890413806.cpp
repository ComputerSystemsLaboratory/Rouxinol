#include <iostream>
using namespace std;

struct Card{
  char suit;
  char value;
};

void bubble_sort(struct Card A[], int N){
  Card temp;
  for(int i=0; i<N; i++){
    for(int j = 0; j < N - i -1; j++){
      if(A[j].value > A[j+1].value){
        temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
      }
    }
  }
}

void selection_sort(struct Card A[], int N){
  int minj;
  for(int i = 0; i< N-1; i++){
    minj = i;
    for(int j = i; j < N; j++){
      if (A[j].value < A[minj].value) {
        minj = j;
      }
    }
    Card t = A[i];
    A[i] = A[minj];
    A[minj] = t;
  }
}

void print(struct Card A[], int N){
  for(int i=0; i<N; i++){
    if (i) {
      cout << " ";
    }
    cout << A[i].suit << A[i].value ;
  }
  cout << endl;
}

bool isStable(struct Card A[], struct Card B[], int N){
  for(int i=0; i<N; i++){
    if(A[i].suit != B[i].suit)
      return false;
  }
  return true;
}


int main(int argc, char const *argv[]) {
  Card A[100], B[100];
  int N;
  char ch;

  cin >> N;
  for(int i=0; i<N; i++){
    cin >> A[i].suit >> A[i].value;
  }

  for(int i=0; i<N; i++)
    B[i] = A[i];

  bubble_sort(A, N);
  selection_sort(B, N);

  print(A, N);
  cout << "Stable" << endl;
  print(B, N);
  if (isStable(A, B, N)) {
    cout << "Stable" << endl;
  }else{
    cout << "Not stable" << endl;
  }

  return 0;
}