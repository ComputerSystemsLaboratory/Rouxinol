#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <iomanip>//cout << fixed からの cout << setprecision(n) << 小数　によって小数を整数部分含めてn桁表示できるようにする
using namespace std;
typedef long long unsigned int ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

int main() {
  int n,x,k;
  int cnt = 0;
  while(1){
  cin >> n >> x;
  if(n == 0 && x == 0) break;
  for(int i = 1;i < x+1;i++){
    for(int j = 1;j < x-i+1;j++){
      k = x - i - j;
      if(i != j && j != k && i != k && k != 0 && i <= n && j <= n && k <= n){
        //cout << i << " " << j << " " << k << endl;
        cnt++;
      }

    }
  }
  cnt = cnt / 6;
  cout << cnt << endl;
  cnt = 0;
  }

  return 0;
}

