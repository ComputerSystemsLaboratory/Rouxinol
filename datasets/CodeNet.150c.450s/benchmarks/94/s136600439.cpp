#include <iostream>
using namespace std;

int main() {
  int n, counter = 0; cin >> n;
  int a[110];
  for(int i = 0; i < n; i++) cin >> a[i];

  //--- Babble Sort ---//
  bool flag = true;
  for(int i = 0; flag; i++) {
    flag = false;
    for(int j = n-1; j > i; j--) {
      if(a[j] < a[j-1]) {
        swap(a[j], a[j-1]);
        counter++;
        flag = true;
      }
    }
  }

  for(int i = 0; i < n; i++) cout << a[i] << (i == n-1 ? "\n" : " ");
  cout << counter << endl;
}

