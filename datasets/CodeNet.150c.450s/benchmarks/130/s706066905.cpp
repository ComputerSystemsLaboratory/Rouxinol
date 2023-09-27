#include<iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int arr[n][m], vec[m];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
  
  for (int i = 0; i < m; i++) {
    cin >> vec[i];
  }

  int x = 0;
  for (int i = 0; i < n; i++) {
    x = 0;
    for (int j = 0; j < m; j++) {
      x += arr[i][j] * vec[j];
    }
    cout << x << endl;
  }
  
  return 0;
}

