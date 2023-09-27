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
	int flag[40]={};

	rep(i,30)flag[i]=0;
	rep(i,28)
	{
		s_1(N);
		flag[N]=1;
	}
	rep_to(1,i,31)if(flag[i]==0)cout<<i<<endl;
	return 0;
}