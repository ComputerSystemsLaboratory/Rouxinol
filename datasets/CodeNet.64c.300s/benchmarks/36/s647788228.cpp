#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int A = min(min(a, b),c);
  int C = max(max(a,b),c);
  int B = (a+b+c) - (A+C);
  cout << A << " ";
  cout << B << " ";
  cout << C << endl;
}


