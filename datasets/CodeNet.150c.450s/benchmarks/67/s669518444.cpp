#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int> > vp;
string s;
vi answers;
int main()
{
  int num[1005];
  num[0]=0;
  for(int i=1;i<=1000;i++)
    {
      num[i]=i*(i+1)/2;
    }
  while(1)
    {
      int n;
      cin >> n;
      if(!n) break;
      int ans=0;
      for(int i=0;i<=n;i++)
	{
	  for(int j=i+1;j<=n;j++)
	    {
	      if(num[j]-num[i]==n && (j-i)>1) 
		{
		  ans++;
		}
	    }
	}
      answers.push_back(ans);
    }
  for(int i=0;i<answers.size();i++)
    {
      cout << answers[i] << endl;
    }
  return 0;
}

