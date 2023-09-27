#include <iostream>
using namespace std;

int main ()
{
  int n, i, j, key, ary[101];

  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> ary[i];
  }

  for (i = 0; i < n; i++)
  {
    key = ary[i];
    j = i - 1;
    while (j >= 0 && key < ary[j]) {
      ary[j+1] = ary[j];
      j--;
    }
    ary[j+1] = key;

    for (j = 0; j < n; j++) {
      if (j) {
        cout << ' ';
      }
      cout << ary[j];
    }
    cout << endl;
  }
  return 0;
}