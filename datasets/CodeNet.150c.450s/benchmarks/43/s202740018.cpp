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
	int a,b;
	while(1)
	{
		s_1(N);
		if(N==0)break;

		int sumA=0,sumB=0;
		rep(i,N)
		{
			s_2(a,b);
			if(a>b)sumA+=(a+b);
			else if(a<b) sumB+=(a+b);
			else 
			{
				sumA+=a;
				sumB+=b;
			}
		}
		cout<<sumA<<" "<<sumB<<endl;
	}

	return 0;
}