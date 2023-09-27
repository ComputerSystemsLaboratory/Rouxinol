#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
int M,T,P,R;
ll sect[100005];
ll ans=0,tmpans=0;
ll tmpmin=1e12;
typedef long long ll;
typedef vector<ll> vll;

int main(int argc,char const* argv[])
{
  while(1)
    {
      int h,w;
      cin >> h >> w;
      if(h==0) break;
      int firstaim=h*h+w*w;
      int tmpaim=1e9;
      int hcand=0,wcand=0;
      for(int i=1;i<=150;i++)
	{
	  for(int j=i+1;j<=150;j++)
	    {
	      if(i==h && j==w) continue;
	      if(i*i+j*j>=firstaim && i*i+j*j<tmpaim)
		{
		  if(i>h && i*i+j*j==firstaim) 
		    {
		      hcand=i;
		      wcand=j;
		      tmpaim=i*i+j*j;
		    }
		  else if(i*i+j*j!=firstaim) 
		    {
		      hcand=i;
		      wcand=j;
		      tmpaim=i*i+j*j;
		    }
		  if(tmpaim==firstaim && hcand>h) break;
		}
	    }
	  if(tmpaim==firstaim && hcand>h) break;
	}
      cout << hcand << ' ' << wcand << endl;
    }
  return 0;
}

