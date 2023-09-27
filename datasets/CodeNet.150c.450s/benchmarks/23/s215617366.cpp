#include <iostream>
using namespace std;
typedef long long ll;

ll F[45];
ll fibonacci(ll n) {
  if(n < 2)
    return F[n] = 1;
  if(F[n])
    return F[n];
  return F[n] = fibonacci(n-1) + fibonacci(n-2);
}
int main() {
  ll n;
  cin >> n;
  cout << fibonacci(n) << endl;
}