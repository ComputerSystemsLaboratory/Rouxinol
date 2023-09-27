#include <iostream>
using namespace std;

bool a[10];
int n, s;
int sum;
int count;
int ans;

void bfs(int i);

int main() {
  while (1) {
    cin >> n >> s;
    if (!n && !s) break;

    for (int i=0; i<10; i++) a[i] = false;
    sum = 0;
    ans = 0;
    count = 0;
    bfs(0);
    cout << ans << endl;
  }
}

void bfs(int i) {
  if (sum+i < s && count < n-1 && i<9) {
    a[i] = true;
    sum += i;
    ++count;
    bfs(i+1);
    a[i] = false;
    sum -= i;
    --count;
  } else if (sum+i == s && count == n-1) {
    ans++;
  } else if (sum+i > s) {
    return;
  }

  if (i<9) {
    bfs(i+1);
  }

  return;
}