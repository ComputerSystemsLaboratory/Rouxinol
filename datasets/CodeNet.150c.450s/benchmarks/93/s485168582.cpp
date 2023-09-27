#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>

using namespace std;

struct Card {
	char suit;
	int value;
	Card() : suit(), value() { }
  bool operator==(const Card& rhs) const {
    return this->suit == rhs.suit && this->value == rhs.value;
  }
};

static bool isStable(Card in[], Card out[], int num) {
  for (int i = 0; i < num; i++) {
    if (!(in[i] == out[i])) {
      return false;
    }
  }
  return true;
/*
  for (int i = 0; i < num; i++) {
    for (int j = i + 1; j < num; j++) {
      for (int a = 0; a < num; a++) {
        for (int b = a + 1; b < num; b++) {
          if (in[i].value == in[j].value && in[i] == out[b] && in[j] == out[a]) {
            return false;
          }
        }
      }
    }
  }
  return true;
  */
}

static void inputArray(Card A[], int num) {
  for (int i = 0; i < num; i++) {
    cin >> A[i].suit >> A[i].value;
   }
}

static void printArray(Card A[], int num) {
  for (int i = 0; i < num; i++) {
    cout << A[i].suit << ' ' << A[i].value << endl;
  }
}

static vector<Card> L(50000 + 2);
static vector<Card> R(50000 + 2);

static inline void merge(Card A[], int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;

  L.assign(&A[left], &A[left + n1]);
  R.assign(&A[mid], &A[mid + n2]);
  L[n1].value = R[n2].value = INT32_MAX;

  for (int i = 0, j = 0, k = left; k < right; k++) {
    if (L[i].value <= R[j].value) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j++;
    }
  } 
}

static inline void mergeSort(Card A[], int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  } 
}

static int partition(Card A[], int p, int r) {
  int x = A[r].value;
  int i = p - 1;
  for (int j = p; j < r; j++) {
    if (A[j].value <= x) {
      i++;
      swap(A[i], A[j]);
    }
  }
  swap(A[i + 1], A[r]);
  return i + 1; 
}

static inline void quickSort(Card A[], int p, int r) {
  if (p < r) {
    int q = partition(A, p, r);
    quickSort(A, p, q - 1);
    quickSort(A, q + 1, r);
  }
}

static vector<Card> A(100000);
static vector<Card> B(100000);

int main() {
  int n;
  cin >> n;

  inputArray(&A[0], n);
  B = A;
//  .assign(&A[0], &A[n]);

  quickSort(&A[0], 0, n - 1);
  mergeSort(&B[0], 0, n);
  
  bool stable = isStable(&A[0], &B[0], n);
  cout << (stable ? "Stable" : "Not stable") << endl;
  
  printArray(&A[0], n);
    
  return 0;
}

