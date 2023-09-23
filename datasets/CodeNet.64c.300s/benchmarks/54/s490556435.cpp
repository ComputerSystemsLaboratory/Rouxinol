#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]) {
  int n, num[100] = {0};
  long long *sum, *aft;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> num[i];

  sum = new long long[21];
  aft = new long long[21];
  memset(sum, 0, sizeof(long long) * 21);
  sum[num[0]] = 1;
  for (int i = 1; i < n-1; i++) {
    memset(aft, 0, sizeof(long long) * 21);
    for (int j = 0; j < 21; j++) {
      if (sum[j] > 0) {
        int a = j + num[i];
        if (0 <= a && a <= 20)
          aft[a] += sum[j];
        a = j - num[i];
        if (0 <= a && a <= 20)
          aft[a] += sum[j];
      }
    }
    long long *tmp = sum;
    sum = aft;
    aft = tmp;
  }

  cout << sum[num[n-1]] << endl;
  return 0;
}