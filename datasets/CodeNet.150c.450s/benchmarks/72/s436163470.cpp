#include<iostream>
#include<string>

using namespace std;

char tr(char c)
{
  if ( c > 0x40 && c < 0x5b)
    return (c + 0x20);
  else if ( c > 0x60 && c < 0x7b)
    return (c - 0x20);
  else
    return c;
}

int main()
{
  string s;
  getline(cin,s);

  for ( int i = 0; i < (int)s.size(); i++ )
    cout << tr(s[i]);
  cout << endl;
  
  return 0;
}