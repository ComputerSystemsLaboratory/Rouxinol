#include <iostream>
#include <deque>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
int n;
int ans=0;
int main()
{
  while(1)
    {
      ans=0;
      cin >> n;
      if(!n) break;
      vector<string> steps(n);
      int foots[]={0,0};
      for(int i=0;i<n;i++)
	{
	  cin >> steps[i];
	}
      if(steps[0]=="lu") foots[0]++;
      else if(steps[0]=="ru") foots[1]++;
      for(int i=1;i<n;i++)
	{
	  if(steps[i]=="lu" && foots[0]==0) 
	    {
	      foots[0]=(foots[0]+1)%2;
	      if(foots[1]==1 && steps[i-1]=="ru") ans++;
	    }
	  if(steps[i]=="ru" && foots[1]==0) 
	    {
	      foots[1]=(foots[1]+1)%2;
	      if(foots[0]==1 && steps[i-1]=="lu") ans++;
	    }
	  if(steps[i]=="ld" && foots[0]==1)
	    {
	      foots[0]=(foots[0]+1)%2;
	      if(foots[1]==0 && steps[i-1]=="rd") ans++;
	    }
	  if(steps[i]=="rd" && foots[1]==1)
	    {
	      foots[1]=(foots[1]+1)%2;
	      if(foots[0]==0 && steps[i-1]=="ld") ans++;
	    }
	}
      cout << ans << endl;
    }
  return 0;
}

