#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
#include<cstring>
#include<math.h>
#include<map>
#include<bitset>
#include<iomanip>
#include<queue>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  cout << n << ":";
  int x = n;
  for(int i = 2; i * i <= x; i++) {
    while(n%i == 0) {
      cout << " " << i;
      n /= i;
    }
  }
  if(n != 1) {
    cout << " " << n;
  }
  cout << endl;
  return 0;
}
