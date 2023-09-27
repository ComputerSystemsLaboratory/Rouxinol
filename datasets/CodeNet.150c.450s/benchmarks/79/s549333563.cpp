#include <iostream>
#include <deque>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
int n,r,catloc,catcnt;
int ans=0;
int main(int argc,char const* argv[])
{
  while(1)
    {
      ans=0;
      cin >> n >> r;
      if(!n) break;
      deque<int> card;
      for(int i=n-1;i>=0;i--)
	{
	  card.push_front(n-i);
	}
      for(int i=0;i<r;i++)
	{
	  cin >> catloc >> catcnt;
	  for(int j=catcnt;j>0;j--)
	    {
	      int tmp=card[catloc+catcnt-2];
	      card.erase(card.begin()+catloc+catcnt-2);
	      card.push_front(tmp);
	    }
	}
      cout << card[0] << endl;
    }
  return 0;
}

