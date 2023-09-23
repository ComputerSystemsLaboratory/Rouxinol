#include <iostream>
using namespace std;
typedef long long ll;
#define MAX 20

ll memo[MAX+1];
ll factorial(int n) {
  if(n == 0) return memo[n] = 1;
  else if(n == 1) return memo[n] = 1;
  else if(memo[n] != 0) return memo[n];
  return memo[n] = n*factorial(n-1);
}

int main() {
  int n;
  cin >> n;
  cout << factorial(n) << endl;
}