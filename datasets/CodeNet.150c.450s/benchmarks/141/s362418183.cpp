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

int main()
{
  array<double,3> x;
  array<double,3> y;
  array<double,3> gs;
  double xp, yp;

  while ( cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> xp >> yp )
    {
      for ( int i = 0; i < x.size(); i++ )
        {
          x[i] -= xp;
          y[i] -= yp;
        }

      for ( int i = 0; i < gs.size(); i++ )
        {
          gs[i] = x[i] * y[(i+1)%3] - y[i] * x[(i+1)%3];
        }
      
      if (( gs[0] > 0 && gs[1] > 0 && gs[2] > 0 ) || ( gs[0] < 0 && gs[1] < 0 && gs[2] < 0 ))
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
  
  return 0;
}