#include <iostream>
using namespace std;
#define INF 1111111111

struct Card {
  int value;
  char suit;
};

int N;
Card A[100100];
Card stable[100100];

void merge(int left, int mid, int right) {
  int n1 = mid-left;
  int n2 = right-mid;

  Card L[N], R[N];
  for (int i = 0; i < n1; i++) {
    L[i] = stable[left+i];
  }
  for (int i = 0; i < n2; i++) {
    R[i] = stable[mid+i];
  }
  L[n1].value = INF;
  R[n2].value = INF;
  int i = 0, j = 0;
  for (int k = left; k < right; k++) {
    if (L[i].value <= R[j].value) {
      stable[k] = L[i];
      i++;
    } else {
      stable[k] = R[j];
      j++;
    }
  }
}

void mergeSort(int left, int right) {
  if (left + 1 < right) {
    int mid = (left+right)/2;
    mergeSort(left, mid);
    mergeSort(mid, right);
    merge(left, mid, right);
  }
}

int partition(int p, int r) {
  int x = A[r].value;
  int i = p-1;
  for (int j = p; j < r; j++) {
    if (A[j].value <= x) {
      i++;
      swap(A[i], A[j]);
    }
  }  
  swap(A[i+1], A[r]);
  return i+1;
}

void quickSort(int p, int r) {
  if (p < r) {
    int q = partition(p, r);
    quickSort(p, q-1);
    quickSort(q+1, r);
  }
}

bool isStable() {
  for (int i = 0; i < N; i++) {
    if (A[i].suit != stable[i].suit) {
      return false;
    }
  }
  return true;
}

void Print(Card arr[]) {
  for (int i = 0; i < N; i++) {
    cout << arr[i].suit << " " << arr[i].value << endl;
  }
}

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> A[i].suit >> A[i].value;
    stable[i].suit = A[i].suit;
    stable[i].value = A[i].value;
  }
  quickSort(0, N-1); 
  mergeSort(0, N);
  cout << (isStable() ? "Stable" : "Not stable") << endl;  
  Print(A);
}


