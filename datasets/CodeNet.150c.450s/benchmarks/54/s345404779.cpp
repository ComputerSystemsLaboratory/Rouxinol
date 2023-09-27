#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

char to_lower(char c)
{
  if ( c >= 'A' && c <= 'Z' )
    {
      c += 0x20;
    }
  return c;
}

int main()
{
  string w;
  string t;
  int cnt = 0;

  cin >> w;
  
  while ( cin >> t )
    {
      transform( t.begin(), t.end(), t.begin(), to_lower );
      if ( t == w ) cnt++;
    }

  cout << cnt << endl;
  return 0;
}