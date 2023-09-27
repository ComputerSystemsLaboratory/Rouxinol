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
  array<int, 4> a;
  array<int, 4> b;

  while ( cin >> a[0] >> a[1] >> a[2] >> a[3] )
    {
      cin >> b[0] >> b[1] >> b[2] >> b[3];

      int ht = 0;
      int bl = 0;
      
      for ( auto i = 0; i < 4; ++i )
        for ( auto j = 0; j < 4; ++j )
          if ( a[i] == b[j] )
            if ( i == j )
              ++ht;
            else
              ++bl;
      cout << ht << " " << bl << endl;
    }
  
  return 0;
}