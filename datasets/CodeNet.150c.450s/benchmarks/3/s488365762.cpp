#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
  
  string str, com;
  int q, a, b;
  string p;

  cin >> str;
  cin >> q;

  for ( int i = 0; i < q; i++ )
    {
      cin >> com;
      if ( com == "print" )
        {
          cin >> a >> b;
          cout << str.substr(a, b-a+1) << endl;
        }
      else if ( com == "reverse" )
        {
          cin >> a >> b;
          reverse(str.begin() + a, str.begin() + b + 1);
        }
      else if ( com == "replace" )
        {
          cin >> a >> b >> p;
          for ( int j = 0; j < b - a + 1; j++ )
            {
              str[a+j] = p[j];
            }
        }
    }
  
  return 0;
}