#include <iostream>
using namespace std;

int f(int x)
{
  return (x * x);
}

int main()
{
  int d;

  while (cin >> d){
    int num = 600;
    long long res = 0;
    for (int i = 1; i * d != 600; i++){
      res += f(d * i) * d;
    }
    cout << res << endl;
  }
  return (0);
}