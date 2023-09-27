#include <iostream>
using namespace std; // c d h s 昇順

#define MAX 36
struct Card{char mark, number; }; // int

void BubbleSort(Card A[], int n){
  int i, j;
  Card swap;
  for (i = 0; i < n; i++){
    for (j = n - 1; j >= i; j--){
      if (A[j].number < A[j - 1].number) {
        swap = A[j];
        A[j] = A[j - 1];
        A[j - 1] = swap;
      }
    }
  }
}

void SelectionSort(Card A[], int n){
  int i, j, minj;
  Card swap;
  for (i = 0; i < n; i++){
    minj = i;
    for (j = i; j < n; j++){
      if (A[j].number < A[minj].number) minj = j;
    }
    swap = A[i];
    A[i] = A[minj];
    A[minj] = swap;
  }
}

bool isStable(Card Bubble[], Card Select[], int n){
  int i;
  for (i = 0; i < n; i++){
    if (Bubble[i].mark !=  Select[i].mark) return false;
  }
  return true;
}

int main(){
  int i, j, n;
  Card Bubble[MAX], Select[MAX];
  cin >> n;
  for (i = 0; i < n; i++) cin >> Bubble[i].mark >> Bubble[i].number;
  for (i = 0; i < n; i++) Select[i] = Bubble[i];

  BubbleSort(Bubble, n);
  SelectionSort(Select, n);

  cout << Bubble[0].mark << Bubble[0].number;
  for (i = 1; i < n; i++){
    cout << " " << Bubble[i].mark << Bubble[i].number;
  }
  cout << "\n";
  cout << "Stable" << "\n";

  cout << Select[0].mark << Select[0].number;
  for (i = 1; i < n; i++){
    cout << " " << Select[i].mark << Select[i].number;
  }
  cout << "\n";
  if ( isStable(Bubble, Select, n))   cout << "Stable" << "\n";
  else cout << "Not stable" << "\n";

  return 0;
}
