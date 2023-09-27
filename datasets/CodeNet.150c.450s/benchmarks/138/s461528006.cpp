#include<iostream>

using namespace std;

// x > y ??§??????x, y???GCD????±???????
int gcd(long int x, long int y)
{
  if(y == 0)
    return x;
  else
    return gcd(y, x % y);
}

int main(){
  long int x, y;
  cin >> x >> y;
  if(y > x)
    swap(x, y);
  cout << gcd(x, y) << endl;
}