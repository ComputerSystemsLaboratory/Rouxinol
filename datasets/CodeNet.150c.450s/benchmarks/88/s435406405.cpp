#include<iostream>
#include<algorithm>
#include<cmath>
#define REP(i,s,n) for(int i=s;i<n;i++)
#define rep(i,n) REP(i,0,n)
#define inf (1<<28)
#define EPS 1e-10
#define equals(a,b) (fabs((a)-(b)) < EPS)
using namespace std;
int h,w;

int main()
{
  while(cin >> h >> w,h|w)
    {
      int ah,aw;
      ah = aw = inf;
      double d = sqrt(w*w+h*h);
      double mdist = inf;
      REP(i,1,h+100)
	REP(j,1,w+100)
	{
	  if(i == h && j == w)continue;
	  if(j <= i)continue;
	  double dist = sqrt((double)(i*i+j*j));
	  if(!equals(dist,d))
	    {
	      if(dist < d)continue;
	    }
	  else
	    {
	      if(i < h)continue;
	    }

	  if(!equals(dist,mdist))
	    {
	      if(dist < mdist)
		{
		  mdist = dist;
		  ah = i,aw = j;
		}
	    }
	  else
	    {
	      if(i < ah)
		{
		  ah = i;
		}
	    }
	}
      cout << ah << " " << aw << endl;
    } 
  return 0;
}