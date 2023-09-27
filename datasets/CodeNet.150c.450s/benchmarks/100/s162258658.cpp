#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <map>
#include <functional>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
  int n;
  cin >> n;
  long long int ans = 1;
  for(int i = 0; i < n; i++){
    ans *= (n - i);
  }
  cout << ans << endl;
}