#include <iostream>
using namespace std;

int main()
{
	int a[5][14],i,j,n,rank,k;
	char s;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=13;j++)
			a[i][j]=0;
	}
	cin>>n;
	for(k=1;k<=n;k++)
	{
		cin>>s>>rank;
		switch(s){
			case 'S' :
				a[1][rank]=1;
				break;
			case 'H' :
				a[2][rank]=1;
				break;
			case 'C' :
				a[3][rank]=1;
				break;
			case 'D' :
				a[4][rank]=1;
				break;
			}
	}
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=13;j++)
		{
			if(a[i][j]==0)
			{
				if(i==1) cout<<'S'<<' '<<j<<endl;
				else if(i==2) cout<<'H'<<' '<<j<<endl;
				else if(i==3) cout<<'C'<<' '<<j<<endl;
				else cout<<'D'<<' '<<j<<endl;
			}
		}
			
	}
	return 0;
 } 
