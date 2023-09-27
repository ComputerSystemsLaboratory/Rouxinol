#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int> > vp;

struct square
{
  int x=0;
  int y=0;
};
int main()
{
  while(1)
    {
      int n;
      cin >> n;
      if(!n) break;
      else if(n==1) cout << 1 << ' ' << 1 << endl;
      else
	{
	  vector<square> s(n);
	  for(int i=1;i<n;i++)
	    {
	      pair<int,int> intro;
	      cin >> intro.first >> intro.second;
	      if(intro.second==1)
		{
		  s[i].y=s[intro.first].y-1;
		  s[i].x=s[intro.first].x;
		}
	      else if(intro.second==3)
		{
		  s[i].y=s[intro.first].y+1;
		  s[i].x=s[intro.first].x;
		}
	      else if(intro.second==0)
		{
		  s[i].x=s[intro.first].x-1;
		  s[i].y=s[intro.first].y;
		}
	      else if(intro.second==2)
		{
		  s[i].x=s[intro.first].x+1;
		  s[i].y=s[intro.first].y;
		}
	    }
	  int colmax=0;
	  int rowmax=0;
	  for(int i=0;i<n;i++)
	    {
	      for(int j=0;j<n;j++)
		{
		  if(i==j) continue;
		  if(colmax<(s[i].y-s[j].y+1)) colmax=(s[i].y-s[j].y+1);
		  if(rowmax<(s[i].x-s[j].x+1)) rowmax=(s[i].x-s[j].x+1);
		}
	    }
	  cout << rowmax << ' ' <<  colmax << endl;
	}
    }
  return 0;
}
      

