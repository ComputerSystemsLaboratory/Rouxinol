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
  array<int,13> ma = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  int m, d, yd;

  while ( cin >> m >> d && ( m != 0 || d != 0 ))
    {
      yd = 0;
      for ( int i = 1; i < m; ++i )
        yd += ma[i];
      yd += d;

      int wd = yd % 7;

      switch ( wd )
        {
        case 0:
          cout << "Wednesday" << endl;
          break;
        case 1:
          cout << "Thursday" << endl;
          break;
        case 2:
          cout << "Friday" << endl;
          break;
        case 3:
          cout << "Saturday" << endl;
          break;
        case 4:
          cout << "Sunday" << endl;
          break;
        case 5:
          cout << "Monday" << endl;
          break;
        case 6:
          cout << "Tuesday" << endl;
          break;
        }          
    }
  return 0;
}