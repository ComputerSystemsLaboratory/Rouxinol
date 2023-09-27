#include <iostream>
#include <cassert>
#include <queue>

#define INF 922337203685477580
typedef long long ll;

using namespace std;

typedef struct {
  char type;
  ll value;
} Card;

int partition(Card *A, int p, int r) {
  ll x = A[r].value;
  int i = p - 1;
  for (int j = p; j < r; j++) {
    if (A[j].value <= x) {
      i++;
      Card a = A[i];
      A[i] = A[j];
      A[j] = a;
    }
  }
  Card a = A[r];
  A[r] = A[i + 1];
  A[i + 1] = a;

  return i + 1;
}

void quickSort(Card *A, int p, int r) {
  if (p < r) {
    int q = partition(A, p, r);
    quickSort(A, p, q - 1);
    quickSort(A, q + 1, r);
  }
}

int main() {
  int n;
  cin >> n;

  Card A[n];
  Card B[n];
  for (int i = 0; i < n; i++) {
    cin >> A[i].type >> A[i].value;
  }
  for (int i = 0; i < n; i++) {
    B[i].type = A[i].type;
    B[i].value = A[i].value * 1000000000 + i;
  }

  quickSort(A, 0, n - 1);
  quickSort(B, 0, n - 1);

  int isStable = 1;
  for (int i = 0; i < n; i++) {
    if (A[i].type != B[i].type) {
      isStable = 0;
      break;
    }
  }
  if (isStable) {
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }

  for (int i = 0; i < n; i++) {
    // cout << A[i].type << " " << A[i].value << " | " << B[i].type << B[i].value <<  endl;
    cout << A[i].type << " " << A[i].value << endl;
  }
  return 0;
}