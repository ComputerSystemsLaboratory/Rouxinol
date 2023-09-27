#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <ctime>
#include <vector>
#include <stack>

using namespace std;
////////////////*My library*////////////////////////
#define rep_to(a,i,n) for(int i=a;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define rep_r(i,n) for(int i=n-1;i>=0;i--)
#define debug(x) cout<<x<<endl
#define s_1(x) cin>>x
#define s_2(x,y) cin>>x>>y
////////////////////////////////////////////////////

////////////////////////
/*prime()*/
/*primecount()*/
/*sort()*/
/*imos???*/
/*????????¢?´¢*/
/*??±???????????¢?´¢*/
/*???????¨???????*/
///////////////////////
int main()
{
	int N;
	int coin[7]={500,100,50,10,5,1};

	while(1)
	{
		int count=0;
		int j=0;

		s_1(N);
		if(N==0)break;
		int max_c=1000-N;
		
		while(max_c>0)
		{
			rep_to(j,i,6)
			{
				if(coin[i]<=max_c)
				{
					max_c-=coin[i];
					count++;
					break;
				}
				else j++;
			}
		}
		cout<<count<<endl;
	}
	
	return 0;
}