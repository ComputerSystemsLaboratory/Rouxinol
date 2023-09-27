#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  while(1) {
    int n;
    cin >> n;
    if(n == 0) break;
    int a[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int Min = abs(a[1] - a[0]);
    for(int i = 0; i < n; i++) {
      for(int j = i+1; j < n; j++) {
        Min = min(Min,abs(a[i] - a[j]));
      }
    }
    cout << Min << endl;
  }

}