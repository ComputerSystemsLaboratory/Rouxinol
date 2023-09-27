#include <iostream>
using namespace std;

int bubbleSort(int a[], int n) {
  int flag = 1;
  int counter = 0;
  while (flag) {
    flag = 0;
    for (int j = n-1; j > 0; j--) {
      if (a[j] < a[j-1]) {
        int tmp = a[j];
        a[j] = a[j-1];
        a[j-1] = tmp;
        counter++;
        flag = 1;
      }
    }
  }
  return counter;
}


int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  int counter = bubbleSort(a, n);
  for (int i = 0; i < n; i++) {
    if (0 < i) cout << " ";
    cout << a[i];
  }
  cout << endl;
  cout << counter << endl;
}

