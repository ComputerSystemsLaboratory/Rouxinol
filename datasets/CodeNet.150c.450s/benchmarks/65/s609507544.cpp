#include <iostream>
using namespace std;

struct Card{
  char pic; int val;
};

void bubbleSort(Card A[], int n){
  for(int i = 0; i < n - 1; i++){
    for(int j = n - 1; j > i; j--){
      if(A[j].val < A[j-1].val){
        swap(A[j], A[j-1]);
      }
    }
  }
}

void selectionSort(Card B[], int n){
  for(int i = 0; i < n; i++){
    int min = i;
    for(int j = i; j < n; j++){
      if(B[j].val < B[min].val) min = j;
    }
    swap(B[i], B[min]);
  }
}

int main(void){
  int n;
  Card A[36], B[36];

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> A[i].pic >> A[i].val;
    B[i].pic = A[i].pic; B[i].val = A[i].val;
  }

  bubbleSort(A, n);
  selectionSort(B, n);

  for(int i = 0; i < n; i++){
    cout << A[i].pic << A[i].val;
    if(i < n - 1) cout << " ";
  }
  cout << "\nStable" << endl;

  bool flag = true;
  for(int i = 0; i < n; i++){
    cout << B[i].pic << B[i].val;
    if(i < n - 1) cout << " ";
    if(B[i].pic != A[i].pic) flag = false;
  }
  if(flag){
    cout << "\nStable" << endl;
  }else{
    cout << "\nNot stable" << endl;
  }

  return 0;
}