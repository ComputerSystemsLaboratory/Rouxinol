#include <iostream>
using namespace std;

int main()
{
  int x, i=1;
  
  while(1)
    {
      cin >> x;
      
      if(x == 0)
	break;
      
      cout << "Case " << i << ": " << x << endl;
      i += 1;
    }
  return 0;
}