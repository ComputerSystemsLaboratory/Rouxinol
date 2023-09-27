#include <iostream>
using namespace std;

int main() {
  int n;  cin >> n;
  int v[100];
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for(int i = 0; i < n; i++) {
    cout << v[i] << (i == n-1 ? "\n" : " ");
  }

  //---Insertion Sort---//
  for(int j = 1; j < n; j++) {
    int key = v[j];
    int k = j - 1;
    while(k >= 0 && key < v[k]) {
      v[k + 1] = v[k];
      k--;
    }
    v[k + 1] = key;
    for(int i = 0; i < n; i++) {
      cout << v[i] << (i == n-1 ? "\n" : " ");
    }
  }
}

