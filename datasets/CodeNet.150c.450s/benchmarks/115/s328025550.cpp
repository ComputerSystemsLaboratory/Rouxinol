#include <iostream>
#include <string>
#include <cstring>
#define repi(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,a) repi(i,0,a)
#define clr(a,v) memset((a),(v),sizeof(a))

int q;
int dp[1001][1001];
std::string s, t;

int rec( int i, int j )
{
  int &ret = dp[i][j];

  if( ~ret )
    return ret;

  if( i == s.size() || j == t.size() )
    return 0;

  ret = 0;

  if( s[i] == t[j] )
    ret = std::max( ret, rec( i+1, j+1 )+1 );

  ret = std::max( ret, std::max( rec( i+1, j ), rec( i, j+1 ) ) );

  return ret;
}

int main()
{
  std::cin >> q;
  while( q-- )
  {
    std::cin >> s >> t;

    clr( dp, -1 );

    std::cout << rec( 0, 0 ) << std::endl;
  }

  return 0;
}