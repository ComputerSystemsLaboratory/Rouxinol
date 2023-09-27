#include <iostream>
#include <string>
using namespace std;

int main()
{
  string ch;
  int n;
  
  while(1)
    {
      cin >> ch;
      if(ch == "-")
	break;
      cin >> n;
      int h[n];
      for(int i=0; i<n; i++)
	{
	  cin >> h[i];
	  ch = ch.substr(h[i], ch.size()) + ch.substr(0, h[i]);
	}
      cout << ch << endl;
    }
}