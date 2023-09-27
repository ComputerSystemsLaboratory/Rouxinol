#include<iostream>
#include<map>
#include<vector>

using namespace std;
typedef long long ll;
int main()
{
  int N,n;
  cin >> N;
  map<ll,ll> exam1,exam2;
  for(int i=0;i<N;i++)
    {
      cin >> n;
      if(i == 0)
	{
	  exam1[n] = 1;
	  continue;
	}
      else if(i == N-1)
	cout << exam1[n] << endl;
      
      for(map<ll,ll>::iterator it = exam1.begin(); it != exam1.end();it++)
	{
	  int m,s;
	  s = (*it).first + n;
	  m = (*it).first - n;
	  if(20>= s)
	  exam2[s] += exam1[(*it).first];
	  if(m >= 0)
	    exam2[m] += exam1[(*it).first];	  
	}
      exam1 = exam2;
      exam2.clear();
    }
  
  return 0;
}