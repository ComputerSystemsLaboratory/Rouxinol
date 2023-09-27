#include<utility>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
  int n, m, i, p, s;
  pair<int,int> w[10000];
  while(cin >> n >> m && n)
    {
      for( i = 0; i < n; i++)
	{
	  cin >> w[i].second >> w[i].first;
	}
      sort(w, w+n);
      i=1;
      while( i <= n  )
	{
	  if ((m -= w[n-i].second) <= 0)
	    {
	      w[n-i].second = -m;
	      p = n-i;
	      break;
	    }
	  i++;
	}
      s = 0;
      if (i <= n) for(i = 0; i <= p; i++) s += w[i].first * w[i].second;
      cout << s << endl;
    }
  return 0;
}