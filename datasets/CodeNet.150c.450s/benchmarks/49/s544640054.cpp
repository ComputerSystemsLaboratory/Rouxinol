#include <iostream>
using namespace std;

int main()
{
  int ave[20];
  int jsup=0;
  for(int j=0;j<20;j++)
    {
      int n;
      cin >> n;
      if(n==0)
	{
	jsup = j;
	break;
	}
      int s[100];
      int max=-1, min=1001;
      int max_i = -1, min_i=-1;
      for(int i=0;i<n;i++)
	{
	  cin >> s[i];
	  if(s[i] > max)
	    {
	      max = s[i];
	      max_i = i;
	    }
	  if(s[i] < min)
	    {
	      min = s[i];
	      min_i = i;
	    }
	  if(i == n-1 && max == min)
	    min_i = max_i+1;
	}
      int sum=0;
      for(int i=0;i<n;i++)
	{
	  if(i==max_i || i==min_i)
	    continue;
	  else
	    sum += s[i];
	}
      ave[j] = sum/(n-2);
    }
  for(int j=0;j<jsup;j++)
    {
      cout << ave[j] << endl;
    }
}

