#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
  int n;
  string tarou;
  string hanako;
  string buf;
  char c;

  int p_t=0;
  int p_h=0;
  int l;

  cin >> n;
  for(int i=0;i<n;i++)
    {
      cin >> tarou >> hanako;

      if(tarou.size()>hanako.size())
	l=hanako.size();
      else
	l=tarou.size();
    
      if(tarou==hanako)
	{
	  p_t++;
	  p_h++;
	}
      else
	{
	  for(int j=0;j<l;j++)
	    {
	      if(tarou[j]<hanako[j])
		{
		  p_h+=3;
		 
		  break;
		}
	      else if(tarou[j]>hanako[j])
		{
		  p_t+=3;
		  
		
		  break;

		}

	      if(j==l-1)
		{
		  if(tarou.size()>hanako.size())		
		    p_t+=3;		
		  else
		    p_h+=3;
		}
	    }
	}


    }

  cout << p_t << " " << p_h << endl;

  return 0;
}