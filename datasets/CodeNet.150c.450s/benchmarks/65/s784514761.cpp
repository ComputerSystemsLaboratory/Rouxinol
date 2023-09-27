#include <iostream>
using namespace std;

struct Card { char suit; int value; };

void bubble(struct Card A[], int N) {
  for (auto i = 0; i < N - 1; i++) {
    for (auto j = N - 1; j > i; j--) {
      if (A[j-1].value > A[j].value) {
        Card temp = A[j]; A[j] = A[j-1]; A[j-1] = temp;
      }
    }
  }
}

void selection(struct Card A[], int N) {
  for (auto i = 0; i < N - 1; i++) {
    auto mini = i;
    for (auto j = i + 1; j < N; j++) {
      if (A[mini].value > A[j].value) {
        mini = j;
      }
    }
    if (mini != i) {
      auto temp = A[i]; A[i] = A[mini]; A[mini] = temp;
    }
  }
}

void print(struct Card A[], int N) {
  for (auto i = 0; i < N; i++) {
    if (i != 0) cout << " ";
    cout << A[i].suit << A[i].value;
  }
  cout << endl;
}

bool isStable(struct Card A[], struct Card B[], int N) {
  for (auto i = 0; i < N; i++) {
    if (A[i].suit != B[i].suit) return false;
  }
  return true;
}

int main(void){
  int N;
  string str;
  Card C1[36], C2[36];;
  
  cin >> N;
  for (auto i = 0; i < N; i++) {
    cin >> C1[i].suit >> C1[i].value;
  }
  
  for (auto i = 0; i < N; i++) C2[i] = C1[i];
  
  bubble(C1, N);
  selection(C2, N);
  
  print(C1, N);
  cout << "Stable" << endl;
  print(C2, N);
  if (isStable(C1, C2, N)) {
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }
  
  return 0;
}