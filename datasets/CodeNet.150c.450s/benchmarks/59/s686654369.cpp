#include <iostream>
#include <vector>
#define eol '\n'
using namespace std;

void printArray(vector<int> a, int n) {
  cout << a[0];
  for (int i = 1; i < n; i++) {
    cout << " " << a[i];
  }
  cout << eol;
}

void insertionSort(vector<int> a, int n) {
  printArray(a, n);
  for (int i = 1; i < n; i++) {
    int v = a[i];
    int j = i - 1;
    while (j >= 0 && a[j] > v) {
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = v;
    
    printArray(a, n);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  insertionSort(a, n);
  
  return 0;
}