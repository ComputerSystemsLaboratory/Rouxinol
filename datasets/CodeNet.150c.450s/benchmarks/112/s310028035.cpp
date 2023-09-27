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
	int N,len;
	char str[10000][10]={};
	char s[100000]={};

	while(1)
	{
		s_1(N);
		if(N==0)break;
		rep(i,N)cin>>str[i][0]>>str[i][1];
		s_1(len);

		rep(i,len)
		{
			s_1(s[i]);
			rep(j,N)
			{
				if(str[j][0]==s[i])
					{
						s[i]=str[j][1];
						break;
					}
			}
		}
		rep(i,len)cout<<s[i];
		cout<<endl;
	}
	return 0;
}