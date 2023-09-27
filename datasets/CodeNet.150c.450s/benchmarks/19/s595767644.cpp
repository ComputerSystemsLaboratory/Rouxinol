#include <iostream>
using namespace std;
int a[10005];
int x[10005];

int main() {
  int b = 1;
  for (int i = 1;i > 0;b++){
    cin >> a[b];
    cin >> x[b];
    i = a[b]+x[b];
    }
    b--;
    for (int i = 1;b > 1;b--){
      if (x[i] < a[i]){
    cout << x[i] << " " << a[i] << endl;
    } else {
      cout << a[i] << " " << x[i] << endl;
      }
      i++;
  }
  return 0;
}
