#include<iostream>
#include<iomanip>
#include<memory>
#include<array>
#include<vector>
#include<queue>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>

using namespace std;

int f( int x )
{
  return x * x;
}

int main()
{
  int d;
  while( cin >> d )
    {
      int area = 0;

      for ( int i = 1; i < 600/d; ++i )
        area += d * f( i * d );

      cout << area << endl;
    }
  
  return 0;
}