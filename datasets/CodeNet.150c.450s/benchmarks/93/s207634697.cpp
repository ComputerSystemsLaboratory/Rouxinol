#include<iostream>

using namespace std;

#define MAX 100000
#define SENTINEL 2000000000

struct Card {
  char suit;
  int value;
};

struct Card L[MAX / 2 + 2], R[MAX / 2 + 2];

void merge(struct Card A[], int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  for (int i = 0; i < n1; i++) {
    L[i] = A[left + i];
  }
  for (int i = 0; i < n2; i++) {
    R[i] = A[mid + i];
  }
  L[n1].value = R[n2].value = SENTINEL;
  int i = 0;
  int j = 0;
  for (int k = left; k < right; k++) {
    if (L[i].value <= R[j].value) {
      A[k] = L[i++];
    } else {
      A[k] = R[j++];
    }
  }
}
   
void mergeSort(struct Card A[], int left, int right){
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int partition(struct Card A[], int p, int r) {
  struct Card x = A[r];
  int i = p - 1;
  for (int j = p; j < r; j++) {
    if (A[j].value <= x.value) {
      i++;
      swap(A[i], A[j]);
    }
  }
  swap(A[i+1], A[r]);
  return i + 1;
}

void quickSort(struct Card A[], int p, int r) {
  int q;
  if (p < r) {
    q = partition(A, p, r);
    quickSort(A, p, q - 1);
    quickSort(A, q + 1, r);
  }
}

int main() {
  struct Card A[MAX], B[MAX];

  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> A[i].suit >> A[i].value;
    B[i] = A[i];
  }

  mergeSort(A, 0, N);
  quickSort(B, 0, N - 1);

  bool stable = true;

  for (int i = 0; i < N; i++) {
    if (A[i].suit != B[i].suit) {
      stable = false;
    }
  }

  if (stable) {
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }
  for (int i = 0; i < N; i++) {
    cout << B[i].suit << " " << B[i].value << endl;
  }

  return 0;
}
