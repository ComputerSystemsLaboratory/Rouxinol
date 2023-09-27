#include <iostream>
using namespace std;

int main()
{
  int a, b, c, i, j=0;

  cin >> a >> b >> c;

  for(i=a; i<=b; i++)
    {
      if(c%i == 0)
	j += 1;
    }

  cout << j << endl;
  
  return 0;
}