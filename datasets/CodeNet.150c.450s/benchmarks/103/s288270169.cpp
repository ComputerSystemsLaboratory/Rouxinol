#include <iostream>
using namespace std;
int n, s, cnt;

void dfs(int depth, int num, int sum) {
  if (depth == 0 && sum == s) {
    cnt++;
    return;
  }
  if (num == 10 || depth == 0) return;
  dfs(depth, num + 1, sum);
  dfs(depth - 1, num + 1, sum + num);
}

int main() {
  while (cin >> n >> s, n | s) {
    cnt = 0;
    dfs(n, 0, 0);
    cout << cnt << endl;
  }
}
