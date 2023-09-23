#include <iostream>
using namespace std;

int main()
{
  int n,m;
  cin >> n;
  for(int i=1;i<=n;i++)
    {
      m=i;
      if(m%3==0)
        {
          cout << " " << i;
          continue;
        }
      while(1)
        {
          if(m==0) break;
          if(m%10==3)
            {
              cout << " " << i;
              break;
            }
          m/=10;
          if(m) continue;
        }
    }
  cout << endl;
  return 0;
}