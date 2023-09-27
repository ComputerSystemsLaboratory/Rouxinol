#include<iostream>
#include<iomanip>
#include<vector>
#include<queue>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<memory>
#include<array>

using namespace std;

int main()
{
  array<int,5> a;

  for ( auto i = 0; i < 5; ++i )
    cin >> a[i];

  sort( a.begin(), a.end(), []( int x, int y ){ return x > y; } );
  
  for ( auto i = 0; i < 5; ++i )
    {
      if ( i ) cout << " ";
      cout << a[i];
    }

  cout << endl;
  
  return 0;
}