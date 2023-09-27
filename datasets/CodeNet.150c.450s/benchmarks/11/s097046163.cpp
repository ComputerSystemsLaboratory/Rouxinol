#include<iostream>

using namespace std;

int main()
{
  int c[4][13]={{0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0}};

  int n;
  string m;
  int v;
    
  cin >> n;

  for (int i = 0; i < n; i++)
    {
      cin >> m >> v;

      if ( m == "S" )
        {
          c[0][v-1] = 1;
        }
      else if ( m == "H" )
        {
          c[1][v-1] = 1;
        }
      else if ( m == "C" )
        {
          c[2][v-1] = 1;
        }
      else
        {
          c[3][v-1] = 1;
        }
    }

  for ( int i = 0; i < 4; i++ )
    {
      for ( int j = 0; j < 13; j++ )
        {
          if ( c[i][j] == 0 )
            {
              if ( i == 0 )
                {
                  cout << "S "  << j + 1 << endl;
                }
              else if ( i == 1 )
                {
                  cout << "H "  << j + 1 << endl;
                }
              else if ( i == 2 )
                {
                  cout << "C "  << j + 1 << endl;
                }
              else
                {
                  cout << "D "  << j + 1 << endl;
                }
            }
        }
    }
  return 0;
}