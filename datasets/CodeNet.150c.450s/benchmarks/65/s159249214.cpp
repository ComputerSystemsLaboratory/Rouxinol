#include<iostream>
using namespace std;

struct Card {
  char suit;
  char value;
};

void swap(struct Card A[], int i, int j) {
  Card tmp = A[i];
  A[i] = A[j];
  A[j] = tmp;
}
  

void bubble_sort(struct Card A[], int N) {
  for (int i = 0; i < N; i++) {
    for (int j = N-1; j > i; j--) {
      if (A[j].value < A[j-1].value) {
        swap(A, j, j-1);
      }
    }
  }
}

void selection_sort(struct Card A[], int N) {
  for (int i = 0; i < N; i++) {    
    int min_j = i;
    for (int j = i+1; j < N; j++) {
      if (A[j].value < A[min_j].value) min_j = j;
    }
    swap(A, i, min_j);
  }
}

void print_card(struct Card A[], int N) {
  for (int i = 0; i < N; i++) {
    if (i > 0) cout << " ";
    cout << A[i].suit << A[i].value;
  }
  cout << endl;
}

bool is_stable(struct Card A1[], struct Card A2[], int N) {
  for (int i = 0; i < N; i++) {
    if (A1[i].suit != A2[i].suit) return false;
  }
  return true;
}

int main() {
  Card C_b[36], C_s[36];
  int i, N;

  cin >> N;
  for (i = 0; i < N; i++) cin >> C_b[i].suit >> C_b[i].value;
  for (i = 0; i < N; i++) C_s[i] = C_b[i];

  bubble_sort(C_b, N);
  selection_sort(C_s, N);

  print_card(C_b, N);
  cout << "Stable" << endl;
  print_card(C_s, N);
  if (is_stable(C_b, C_s, N)) {
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }

  return 0;
}    

