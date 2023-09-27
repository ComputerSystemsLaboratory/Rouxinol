#include <iostream>
#include <cstdio>
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
///////////////////////
class f
{
public:
	int x,y;
	f(int X,int Y)
	{
		x=X;
		y=Y;
	}
};
int main()
{
	int H,W;
	int x2,y2;
	int count=0;
	char keep[10]={};
	char str[102][102]={};
	int flag[102][102]={};
	int sum[2][10]={
						{1,0,-1,0},
						{0,1,0,-1}
					};
	stack<f> st;
	while(1)
	{
		count=0;
		s_2(H,W);
		if(H==0 && W==0)break;
		rep_to(0,i,H+2)rep_to(0,j,W+2)flag[j][i]=0;
		rep_to(1,i,H+1)rep_to(1,j,W+1)s_1(str[j][i]);
		
		rep_to(1,i,H+1)
		{
			rep_to(1,j,W+1)
			{
				if(flag[j][i]==1)continue;
				count++;
				keep[0]=str[j][i];
				st.push(f(i,j));
				flag[j][i]=1;
				while(!st.empty())
				{
					x2=st.top().x;
					y2=st.top().y;
					st.pop();
					rep(k,4)
					{
						if(str[y2+sum[0][k]][x2+sum[1][k]]==keep[0] && flag[y2+sum[0][k]][x2+sum[1][k]]!=1)
						{
							st.push(f(x2+sum[1][k],y2+sum[0][k]));
							flag[y2+sum[0][k]][x2+sum[1][k]]=1;
						}
					}
				}
			}
		}
		debug(count);
	}
	
	return 0;
}