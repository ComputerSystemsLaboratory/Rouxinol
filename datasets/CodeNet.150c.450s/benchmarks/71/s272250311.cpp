#include<iostream>

using namespace std;

int count( int i, int n )
{
  if ( i == 4 )
    if ( n == 0 )
      return 1;
    else
      return 0;
  else
    {
      if ( n < 0 ) return 0;
      
      int ret = 0;
      for ( int j = 0; j < 10; j++ )
        {
          ret += count( i+1, n - j );
        }
      return ret;
    }
}

int main()
{
  int n;
  
  while ( cin >> n )
    cout << count(0, n) << endl;

  return 0;
}