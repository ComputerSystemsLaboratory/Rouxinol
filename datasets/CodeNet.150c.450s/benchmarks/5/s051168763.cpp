#include <iostream>
#include <algorithm>
using namespace std;

int n;
int a[101];

int main() {
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  reverse(a, a+n);

  for(int i = 0; i < n-1; i++){
    cout << a[i] << " ";
  }
  cout << a[n-1] << endl;
}