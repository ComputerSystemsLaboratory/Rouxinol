#include <iostream>
using namespace std;

int main()
{
	int a1[4][11],a2[4][11],a3[4][11],a4[4][11],b,f,r,v,n,i,j,k;
	cin>>n;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=10;j++)
			a1[i][j]=a2[i][j]=a3[i][j]=a4[i][j]=0;
	}
	for(k=1;k<=n;k++)
	{
		cin>>b>>f>>r>>v;
		switch(b)
		{
			case 1:
				a1[f][r] += v;
				break;
			case 2:
				a2[f][r] += v;
				break;
			case 3:
				a3[f][r] += v;
				break;
			case 4:
				a4[f][r] += v;
				break;
		}
	}

	for(i=1;i<=3;i++)
	{
	   	for(j=1;j<=10;j++)
	   		cout<<' '<<a1[i][j];
	   	cout<<endl;	
	}
	cout<<"####################"<<endl;
		for(i=1;i<=3;i++)
	{
	   	for(j=1;j<=10;j++)
	   		cout<<' '<<a2[i][j];
	   	cout<<endl;	
	}
	cout<<"####################"<<endl;
		for(i=1;i<=3;i++)
	{
	   	for(j=1;j<=10;j++)
	   		cout<<' '<<a3[i][j];
	   	cout<<endl;	
	}
	cout<<"####################"<<endl;
		for(i=1;i<=3;i++)
	{
	   	for(j=1;j<=10;j++)
	   		cout<<' '<<a4[i][j];
	   	cout<<endl;	
	}
	return 0;
 } 
