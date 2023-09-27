#include <iostream>
using namespace std;

int pri(int n)
{
  if (n % 2 == 0){
    cout << " " << 2;
    return n / 2;
  }
  for (int i = 3; i <= n / i; i += 2){
    if (n % i == 0){
      cout << " " << i;
      return n / i;
    }
  }

  cout << " " << n;
  return 1;
}

int main()
{
  int n;

  cin >> n;
  cout << n << ":";

  while(n != 1){
    n = pri(n);
  }

  cout << endl;

  return 0;
}