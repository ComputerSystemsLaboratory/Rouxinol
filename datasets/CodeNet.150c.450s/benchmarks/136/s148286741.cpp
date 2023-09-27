#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
  long long int x, y;
  while(cin >> x >> y) {
    if (x < y) swap(x, y);
    long long int X = x, Y = y;
    while(1) {
      x %= y;
      swap(x, y);
      if(y == 0) break;
    }
    cout << x << ' ' << X * Y / x << endl;
  }
}