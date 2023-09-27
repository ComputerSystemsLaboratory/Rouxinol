#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
  int n, k;
  cin >> n >> k;
  do {
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    // 累積和を計算
    vector<int> com_sums(n + 1, 0);
    for (int i = 0; i < a.size(); i++) {
      com_sums[i + 1] = com_sums[i] + a[i];
    }

    int result = com_sums[k] - com_sums[k - k];
    for (int i = k + 1; i < a.size(); i++) {
      result = max(result ,com_sums[i] - com_sums[i - k]);
    }
    cout << result << "\n";

    cin >> n >> k;
  } while(n != 0);

  return 0;
}
