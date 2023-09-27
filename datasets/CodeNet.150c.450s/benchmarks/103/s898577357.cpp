#include <iostream>
using namespace std;

int n;
int s;
int count;

int rec(int state, int num, int sum) {
  int count;
  count = 0;
  if(num > n) {
    if(sum == s) {
      return 1;
    } else {
      return 0;
    }
  }
  for(int i = state; i <= 9; i++) {
    count += rec(i+1, num+1, sum+i);
  }
  return count;
}

int main() {
  while(1) {
    cin >> n >> s;
    if(n == 0 && s == 0) break;
    cout << rec(0, 1, 0) << endl;
  }
}