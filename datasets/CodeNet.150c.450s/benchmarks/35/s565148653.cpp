#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
  vector<int> maxsums, a;
  int n, tmp;

  a.reserve(5000);
  while (true) {
    cin >> n;
    if (n == 0)
      break;
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++) {
      tmp = a[i];
      for (int j = i + 1; j < n; j++) {
        tmp += a[j];
        if (tmp > a[i])
          a[i] = tmp;
      }
    }

    int max = a[0];
    for (int i = 0; i < n; i++)
      if (max < a[i])
        max = a[i];
    maxsums.push_back(max);
  }

  for (int i = 0; i < maxsums.size(); i++)
    cout << maxsums[i] << endl;
  return 0;
}