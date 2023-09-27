#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int in[5];
  cin >> in[0] >> in[1] >> in[2] >> in[3] >> in[4];
  sort(in, in + 5, greater<int>());
  for (int i = 0; i < 5; i++) {
    if (i < 4)
      cout << in[i] << " ";
    else
      cout << in[i] << endl;
  }
  return 0;
}