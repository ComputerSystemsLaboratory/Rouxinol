#include<iostream>
using namespace std;
int main()
{
	int a[4],b[4],i,j,x,y;
	while(cin>>a[0])
	{
		x=y=0;
		for(i=1;i<4;i++)
			cin>>a[i];
		for(i=0;i<4;i++)
		{
			cin>>b[i];
			if(b[i]==a[i])
			{
				x++;
				continue;
			}
			for(j=0;j<4;j++)
				if(b[i]==a[j])
				{
					y++;
					break;
				}
		}
		cout<<x<<' '<<y<<endl;
	}
}