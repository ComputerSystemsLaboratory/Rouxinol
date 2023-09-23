#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define MAX_N 30
int dp[MAX_N + 1];
bool checked[MAX_N + 1];
//??\???

int count(int n) {
  if ( n == 1 ) return 1;
  if ( n == 2 ) return 2;
  if ( n == 3 ) return 4;

  if(checked[n] == true){
    return dp[n];
  } else {
    int res = count(n-1) + count(n-2) + count(n-3);
    dp[n] = res;
    return res;
  }

}

int main() {
  ios::sync_with_stdio(false);

  int n, years;
  while(cin >> n) {
    if (n==0) break;
    int c = count(n);
    years = ( c / 3650 ) + (c % 3650 == 0 ? 0 : 1);
    cout << years << endl;
  }

  return 0;
}