#include <iostream>
using namespace std;
int shuu(int x, int y);
int menseki(int x, int y);
int main()
{
  int a,b;
  cin >> a >> b;
  cout << menseki(a, b) << " "<< shuu(a, b) << endl;
  return 0;
}

int shuu(int x, int y)
{
  return (x+y)*2;
}

int menseki(int x, int y)
{
  return x*y;
}