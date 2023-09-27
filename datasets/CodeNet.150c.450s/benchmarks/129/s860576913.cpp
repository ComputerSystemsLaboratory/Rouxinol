#include<iostream>

using namespace std;

int main()
{
  int r, c;
  cin >> r >> c;

  int a[101][101];

  for ( int i = 0; i < r; i++ )
    {
      int sum = 0;
      for ( int j = 0; j < c; j++ )
        {
          cin >> a[i][j];
          sum += a[i][j];
        }
      a[i][c] = sum;
    }

  for ( int i = 0; i < r; i++ )
    {
      for ( int j = 0; j <= c; j++ )
        {
          if ( j ) cout << " ";
          cout << a[i][j];
        }
      cout << endl;
    }

  for ( int i = 0; i <=c; i++ )
    {
      int sum = 0;
      for ( int j = 0; j < r; j++ )
        {
          sum += a[j][i];
        }
      if ( i ) cout << " ";
      cout << sum;
    }
  cout << endl;
  
  return 0;
}