#include <iostream>
using namespace std;

int in;

int dfs(int num) {
  if (num == in) return 1;
  else if(num > in) return 0;
  return dfs(num+1) + dfs(num+2) + dfs(num+3);
}

int main() {
  while(1) {
    cin >> in;
    if (in == 0) break;
    int out = dfs(0);
    cout << out / 10 / 365 + 1 << endl;
  }
}