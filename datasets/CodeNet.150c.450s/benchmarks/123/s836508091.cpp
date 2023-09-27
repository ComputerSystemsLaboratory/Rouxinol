#include <iostream>
#include <set>
#include <vector>

using namespace std;

vector<bool> prime(int d) {
  vector<bool> arr(d+1, true);
  arr[0] = arr[1] = false;

  for (int i = 2; i*i <= d; i++) {
    if (!arr[i]) continue;
    for (int j = 2; j*i <= d; j++) {
      if (!arr[j*i]) continue;
      arr[j*i] = false;
    }
  }

  return arr;
}

int main(int argc, char* argv[]) {
  int N; cin >> N;
  
  int m = 0;
  vector<int> input;
  for (int i = 0; i < N; i++) {
    int d; cin >> d;
    input.push_back(d);
    m = max(m, d);
  }

  vector<bool> arr = prime(m);

  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (arr[input[i]]) ans++;
  }
  cout << ans << endl;
  return 0;
}