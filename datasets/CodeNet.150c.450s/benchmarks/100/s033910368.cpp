#include <iostream>
#include <functional>

using namespace std;

int main()
{
  function<long long(int)> const fact = [&]( int n ) -> long long { return n==0 ? 1 : fact( n-1 ) * n; };
  int i; cin >> i;
  cout << fact( i ) << endl;
}