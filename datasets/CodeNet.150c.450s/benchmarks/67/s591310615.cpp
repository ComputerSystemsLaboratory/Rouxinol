#include <iostream>
using namespace std;

int main()
{
  int N;
  while (cin >> N && N != 0) {
    int ans = 0;
    for (int k = 2; k*(k+1)/2 <= N; k++) {
      if ((N - k*(k+1)/2) % k == 0) {
        ans++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}