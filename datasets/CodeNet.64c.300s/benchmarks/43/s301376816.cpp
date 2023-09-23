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
	int a,b,c,d;
	int sumA=0,sumB=0;

	rep(i,2)
	{
		cin>>a>>b>>c>>d;
		if(i==0)sumA=a+b+c+d;
		else sumB=a+b+c+d;
	}

	if(sumA>=sumB)cout<<sumA<<endl;
	else if(sumA<sumB)cout<<sumB<<endl;

	return 0;
}