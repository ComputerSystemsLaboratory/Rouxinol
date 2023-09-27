#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  cout << n << ":";
  while (n > 1) {
    // 約数を探す
    const double sqrtn = sqrt(n);
    for (int i=2; i<=sqrtn; i++) {
      if (n % i == 0) {
	// iが約数
	cout << " " << i;
	n /= i;
	goto LAST;
      }
    }
    // nは素数なので終了
    cout << " " << n << endl;
    break;
    
    LAST: 0;
  }
  
  return 0;
}
