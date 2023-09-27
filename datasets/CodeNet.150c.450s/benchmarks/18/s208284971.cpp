#include<iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int debt = 100;
  
  for ( int i = 0; i < n; i++ )
    {
      debt *= 1050;
      
      if ( debt % 1000 != 0 )
        debt = debt / 1000 + 1;
      else
        debt /= 1000;
    }
  cout << debt * 1000 << endl;
  
  return 0;
}