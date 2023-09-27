#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int l, m, n;
  cin >> l >> m >> n;

  if ((l < m) && (m < n)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}