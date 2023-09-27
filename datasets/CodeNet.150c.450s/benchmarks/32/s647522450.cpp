#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
  int n_min,n_max;
  int m;
  int p;
  int result=0;
  
  vector <int> point;

  while(1)
    {
      cin >> m >> n_min >> n_max;
      if(m==0 && n_min==0 && n_max==0) break;

      for(int i=0;i<m;i++)
	{
	  cin >> p;
	  point.push_back(p);
	}

      sort(point.begin(),point.end(),greater<int>());

      int gap_max=0;
      int gap_tmp;
  
      for(int i=n_min;i<=n_max;i++)
	{
	  //cout << i << endl;
	  if(i!=0)
	    {
	      gap_tmp = point[i-1]-point[i];
	      if(gap_tmp>=gap_max && i > result)
		{
		  gap_max=gap_tmp;
		  result=i;
		}
	    }
	}

      cout << result << endl;

      gap_max=0;
      result=0;
      point.clear();
    }
  return 0;

}
