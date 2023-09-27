#include<iostream>

using namespace std;

int main() {
  int n;
  int a[10000];
  int b[10000];
  
  while(cin >> n) {
    if(n == 0) {
      break;
    }

    for(int i = 0; i < n; i++ ){
      cin >> a[i] >> b[i];
    }

    int ans_a = 0;
    int ans_b = 0;
    for(int i = 0; i < n; i++) {
      if(a[i] < b[i]) {
        ans_b += a[i] + b[i];
      }else if(a[i] > b[i]) {
        ans_a += a[i] + b[i];
      }else {
        ans_a += a[i];
        ans_b += b[i];
      }
    }

    cout << ans_a << " " << ans_b << endl;
  }

  return 0;
}