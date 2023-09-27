#include<iostream>
#include<string>

using namespace std;

int main()
{
  int n;
  cin >> n;

  string t, h;
  int tp = 0, hp = 0;
  
  for ( int i = 0; i < n; i++ )
    {
      cin >> t >> h;
      if ( t == h )
        {
          tp++;
          hp++;
        }
      else if ( t > h )
        tp += 3;
      else
        hp += 3;
    }
  cout << tp << " " << hp << endl;
  
  return 0;
}