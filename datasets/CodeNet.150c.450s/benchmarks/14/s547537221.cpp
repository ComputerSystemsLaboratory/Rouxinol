#include<iostream>
using namespace std;

int call(int n)
{
  int x;
  
  for (int i = 1; i <= n; i++)
    {
      x = i;
      if ( x % 3 == 0)
        {
          cout << " " << i;
        }
      else
        {
          while (x)
            {
              if ( x % 10 == 3 )
                {
                  cout << " " << i;
                  break;
                }
              x /= 10;
            }
        }
    }
  cout << endl;
  return 0;
}

int main()
{
  int n;
  cin >> n;
  call(n);
  return 0;
}