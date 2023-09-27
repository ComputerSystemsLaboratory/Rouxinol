#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int m, n;
  cin >> m >> n;

  if (m < n) {
    cout << "a < b" << endl;
  } else if (m > n) {
    cout << "a > b" << endl;
  } else if (m == n) {
    cout << "a == b" << endl;
  }
}