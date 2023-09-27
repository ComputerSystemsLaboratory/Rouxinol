#include <iostream>

using namespace std;

int n;
int a[1010];

void show_array() {
  for (int i = 0; i < n - 1; i++) {
    cout << a[i] << " ";
  }
  cout << a[n-1] << endl;
}
int main() {

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  show_array();
  for (int i = 1; i < n; i++) {
    int tmp = a[i];
    int j = i - 1;
    while(j >= 0 && a[j] > tmp) {
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = tmp;
    show_array();
  }
}

