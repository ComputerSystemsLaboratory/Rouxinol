#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<set>
#include<cmath>
using namespace std;
typedef vector<int> vi;
set<string> cands;
int dy[]={-1,-1,-1,0,0,1,1,1};
int dx[]={-1,0,1,-1,1,-1,0,1};
int maxlength=0,h,w;
string ans="";

int z[105];
int y[1005];
void calc()
{
  for(int i=0;i<=100;i++)
    {
      z[i]=i*i*i;
    }
  for(int j=0;j<=1000;j++)
    {
      y[j]=j*j;
    }
}

int main()
{
  calc();
  while(1) 
    {
      int e;
      cin >> e;
      if(e==0) break;
      int ans=10000000;
      for(int i=0;i<=(int)sqrt(e);i++)
	{
	  int tmpe=e;
	  int tmpans=i;
	  tmpe-=i*i;
	  for(int j=100;j>=2;j--)
	    {
	      if(tmpe-z[j]>=0)
		{
		  tmpe-=z[j];
		  tmpans+=j;
		  break;
		}
	    }
	  tmpans+=tmpe;
	  ans=min(ans,tmpans);
	}
      cout << ans << endl;
    }
}

