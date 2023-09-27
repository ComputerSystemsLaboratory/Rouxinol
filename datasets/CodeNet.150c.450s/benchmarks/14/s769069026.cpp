#include <iostream>
using namespace std;

bool div_ok(int n) {
  if (n % 3 == 0) {
    return true;
  } else {
    return false;
  }
}

bool num_dispear(int n) {
  while (n > 0) {
    if (n % 10 == 3) {
      return true;
    }
    n /= 10;
  }
  return false;
}

int main () {
  bool loop = true;
  int i = 1;
  int n;
  cin >> n;
  bool div_check = false;
  while (i <= n) {
    if (div_ok(i)) {
      cout << " " << i;
      div_check = true;
    }
    if (!div_check && num_dispear(i)) {
      cout << " " << i;
    }
    i++;
    div_check = false;
  }
  cout << endl;
  return 0;
}