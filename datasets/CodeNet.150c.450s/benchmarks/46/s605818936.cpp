#include<iostream>
#include<vector>
using namespace std;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
int n,x;
int count;
int main()
{
	while(1)
	{
		count=0;
		cin>>n>>x;
		if(n==0)break;
		rep2(i,1,n+1)
		{
			rep2(j,i+1,n+1)
			{
				rep2(k,j+1,n+1)
				{
					if(i+j+k==x)count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}