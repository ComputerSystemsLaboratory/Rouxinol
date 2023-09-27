#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<cmath>
#include<numeric>
using namespace std;


int main(void) {

  long long int ans = 1;
  long long int n;
  cin >> n;
  for(int i=1; i<=n; i++) ans *= i;
  cout << ans << endl;
  return 0;
}