#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  int count=0;
  string T, W;
  cin >> W;
  transform(T.begin(), T.end(), T.begin(), ::tolower);

  while(1)
    {
      cin >> T;
      if(T=="END_OF_TEXT")
	break;
      transform(T.begin(), T.end(), T.begin(), ::tolower);
      if(W==T)
	count += 1;
    }
  cout << count << endl;
}