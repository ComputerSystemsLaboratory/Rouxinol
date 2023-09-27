#include <iostream>
using namespace std;
int a[10005];

int main() {
  int b = 1;
  int c = 0;
  for (int i = 1;i > 0;b++){
    cin >> a[b];
    i = a[b];
    }
    b--;
    for (int i = 1;b > 1;b--){
    cout << "Case " << i << ":" << " " << a[i] << endl;
    i++;
  }
  return 0;
}
