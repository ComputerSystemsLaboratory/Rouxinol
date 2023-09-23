#include <iostream>
using namespace std;

int cnt; int N, Ans;

void choose(int k, int l, int digit) {
  if(l == N && k == Ans) { cnt++; return; }
  else if (l == N) return;
  else if (digit >= 10) return;
  
  choose(k+digit, l+1, digit+1);
  choose(k, l, digit+1);
}

int main () {
  while(cin>>N>>Ans, N||Ans) {
    cnt = 0;
    choose(0, 0, 0);
    cout << cnt << endl;
  }
  return 0;
}