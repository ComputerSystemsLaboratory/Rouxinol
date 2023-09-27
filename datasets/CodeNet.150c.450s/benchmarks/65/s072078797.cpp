#include <bits/stdc++.h>
using namespace std;

struct C {
  char suit;
  int value;
};

void BubbleSort(C a[], int n) {
  for (int i=0; i<n; i++) {
    for (int j=n-1; j>i; j--) {
      if (a[j].value < a[j-1].value) {
        C temp = a[j];
        a[j] = a[j-1];
        a[j-1] = temp;
      }
    }
  }
}

void SelectionSort(C a[], int n) {
  for (int i=0; i<n; i++) {
    int min_j = i;
    for (int j=i; j<n; j++) {
      if (a[j].value < a[min_j].value) min_j = j;
    }
    if (i != min_j) {
      C temp = a[i];
      a[i] = a[min_j];
      a[min_j] = temp;
    }
  }
}

int main() {
  int n;
  cin >> n;
  C a[n], b[n];
  for (int i=0; i<n; i++) cin >> a[i].suit >> a[i].value;
  for (int i=0; i<n; i++) b[i] = a[i];

  BubbleSort(a, n);
  SelectionSort(b, n);

  for (int i=0; i<n-1; i++) cout << a[i].suit << a[i].value << " ";
  cout << a[n-1].suit << a[n-1].value << endl;
  cout << "Stable" << endl;

  string res = "Stable";
  for (int i=0; i<n; i++) {
    if (a[i].suit != b[i].suit) {
      res = "Not stable";
      break;
    }
  }

  for (int i=0; i<n-1; i++) cout << b[i].suit << b[i].value << " ";
  cout << b[n-1].suit << b[n-1].value << endl;
  cout << res << endl;

  return 0;
}

