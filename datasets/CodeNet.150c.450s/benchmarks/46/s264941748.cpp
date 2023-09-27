#include <iostream>
using namespace std;

int main()
{
  int n,x;
  cin >> n >> x;
  int a[100]={};
  int l=0;
  while(n!=0||x!=0)
    {
      for(int i=1;i<=n;i++)
	{
	  if(x<i)break;
	  for(int j=1;j<i;j++)
	    {
	      if(x<j)break;
	      for(int k=1;k<j;k++)
		{
		  if(x<k)break;
		  if(i+j+k==x)a[l]+=1;
		}
	    }
	}
      l++;
      cin >> n >> x;
    }

  for(int i=0;i<l;i++)
    cout << a[i] << endl;

  return 0;
}