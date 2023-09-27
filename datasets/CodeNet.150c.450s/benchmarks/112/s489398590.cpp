#include<iostream>
using namespace std;
struct str
{
	char h;
	char w;
};
str v[100000];
char t,b[100000];
int main()
{
	long long int j,i,n,m;
	while(1)
	{
		cin>>n;
		if(n==0)
			break;
		for(i=0;i<n;i++)
		{
			cin>>v[i].h>>v[i].w;
		}
		cin>>m;
		for(i=0;i<m;i++)
		{
			cin>>t;
			for(j=0;j<n;j++)
			{
				if(t==v[j].h)
				{
					b[i]=v[j].w;
					break;
				}
				else
					b[i]=t;
			}
		}
		for(i=0;i<m;i++)
		{
			cout<<b[i];
		}
		cout<<endl;
	}
	return 0;
}