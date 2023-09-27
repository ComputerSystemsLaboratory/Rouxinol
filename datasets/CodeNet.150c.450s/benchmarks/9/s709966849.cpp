#include<iostream>
#include<string>

using namespace std;

int main()
{
  string s;
  int m = 0;

  while ( cin >> s && s != "-" )
    {
      int sn = s.size();
      int n, m, l;
      int sum = 0;
      
      s += s;
      
      cin >> n;
      
      for ( int i = 0; i < n; i++ )
        {
          cin >> m;
          sum += m;
        }

      l = sum % sn;

      cout << s.substr(l, sn) << endl;
    }
  
  return 0;
}