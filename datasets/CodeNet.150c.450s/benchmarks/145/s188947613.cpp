#include<iostream>
#include<iomanip>
#include<vector>
#include<queue>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<memory>
#include<string>
#include<map>

using namespace std;

int main()
{
  string s;
  string mxs;
  int mxl = 0;
  map<string, int> h;
  int mxh = 0;
  string mxhs;
  
  while ( cin >> s )
    {
      if ( h.count( s ) == 0 )
        h[ s ] = 1;
      else
        ++h[ s ];
      
      if ( s.size() > mxl )
        {
          mxl = s.size();
          mxs = s;
        }
    }

  for ( auto it = h.begin(); it != h.end(); ++it )
    if ( (*it).second > mxh )
      {
        mxh = (*it).second;
        mxhs = (*it).first;
      }
  
  cout << mxhs << " " << mxs << endl;
  
  return 0;
}