#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
  int n;

  while(true) {
    cin >> n;
    if(n == 0)
      break;

    int sum = 0;
    int min_val = 10000;
    int max_val = -1;
    for (int i = 0; i < n; i++) {
      int s;
      cin >> s;
      min_val = (min_val > s) ? s : min_val;
      max_val = (max_val < s) ? s : max_val;
      sum += s;
    }
    sum -= min_val + max_val;
    cout << (sum / (n - 2)) << endl;
  }
  return 0;
}