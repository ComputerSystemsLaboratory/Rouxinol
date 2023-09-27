#include <iostream>


using namespace std;

int solve(int n){
  int e = 1e6;
  for (int i = 0; i*i*i <= n ; ++i)
  {
    for (int k = 0; k*k <= n - i*i*i; ++k)
    {
      e = min(e, n-i*i*i-k*k+i+k);
    }
  }
  return e;
}


int main(){
  int n;
  while(true){
    cin >> n;
    if (n == 0)
    {
      break;
    }
    cout << solve(n) << endl;
  }
}