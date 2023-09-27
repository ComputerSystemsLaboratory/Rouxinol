#include "bits/stdc++.h"
using namespace std;

struct Card { char suit; int value; };

void Print(vector<Card>& A) {
  for (int i = 0; i < A.size(); ++i) {
    if (i) cout << " ";
    cout << A[i].suit << A[i].value;
  }
  cout << endl;
}

void SelectionSort(vector<Card>& A) {
  for (int i = 0; i < A.size(); ++i) {
    int mini = i;
    for (int j = i; j < A.size(); ++j) {
      if (A[j].value < A[mini].value) {
        mini = j;
      }
    }
    swap(A[i], A[mini]);
  }
}

void BubbleSort(vector<Card>& A) {
  int counter = 0;
  for (int i = 0; i < A.size(); ++i) {
    for (int j = A.size() - 1; j >= i + 1; --j) {
      if (A[j].value < A[j - 1].value) {
        swap(A[j], A[j - 1]);
        ++counter;
      }
    }
  }
}

void PrintIsStable(vector<Card>& A, vector<Card>& B) {
  auto itrB = B.begin();
  for (auto& a : A) {
    if (a.suit != (*itrB).suit) {
      cout << "Not stable" << endl;
      return;
    }
    ++itrB;
  }
  cout << "Stable" << endl;
}

int main() {
  int n;
  cin >> n;
  vector<Card> A(n);
  for (auto& a : A)
    cin >> a.suit >> a.value;
  auto B = A;
  BubbleSort(A);
  SelectionSort(B);
  Print(A);
  cout << "Stable" << endl; //Bubble Sort is Stable
  Print(B);
  PrintIsStable(A, B);
  //system("pause");
}