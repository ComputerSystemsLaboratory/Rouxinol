#include <iostream>
using namespace std;

int main()
{
  int n;
  while(cin >> n && n > 0)
    {
      int s[100];
      int max=-1, min=1001;
      int sum=0, ave=0;
      for(int i=0;i<n;i++)
	{
	  cin >> s[i];
	  sum += s[i];
	  if(s[i] > max)
	    max = s[i];
	  if(s[i] < min)
	    min = s[i];
	}
      sum -= (max + min);
      ave = sum/(n-2);
      cout << ave << endl;
    }
}

