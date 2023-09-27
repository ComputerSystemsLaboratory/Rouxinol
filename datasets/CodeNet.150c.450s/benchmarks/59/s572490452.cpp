#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;
  int var[num];

  for (int i = 0; i < num; i++) {
    cin >> var[i];
  }

  int tmp, i, j;
  for (i = 0; i < num; i++) {

    if (i != 0) {

     tmp = var[i];
     j = i - 1;
      while (j >= 0 && var[j] > tmp) {
        var[j + 1] = var[j];
        j--;
      }
      var[j + 1] = tmp;
    }

    for (int p = 0; p < num; p++) {
      cout << var[p];
      if (p == num - 1) {
        cout << endl;
      } else {
        cout << " ";
      }
    }
  }
  return 0;
}
