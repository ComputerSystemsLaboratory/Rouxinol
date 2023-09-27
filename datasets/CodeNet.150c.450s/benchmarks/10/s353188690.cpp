#include <iostream>
using namespace std;

int main() {
	int a[5][4][11];
	for (int i = 1; i < 5; ++i)
	{
		for (int j = 1; j < 4; ++j)
		{
			for (int k = 1; k < 11; ++k)
			{
				a[i][j][k]=0;/* code */
			}	/* code */
		}/* code */
	}
	int n,b,f,r,v;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>b>>f>>r>>v;
		a[b][f][r]+=v;
		/* code */
	}

	for(int j=1; j<=3;j++)
	{
		for(int k=1; k<=10; ++k)
		{
			cout<<" "<<a[1][j][k];
		}
		cout<<endl;
	}
	cout<<"####################"<<endl;
	for(int j=1; j<=3;j++)
	{
		for(int k=1; k<=10; ++k)
		{
			cout<<" "<<a[2][j][k];
		}
		cout<<endl;
	}
	cout<<"####################"<<endl;
	for(int j=1; j<=3;j++)
	{
		for(int k=1; k<=10; ++k)
		{
			cout<<" "<<a[3][j][k];
		}
		cout<<endl;
	}
	cout<<"####################"<<endl;
	for(int j=1; j<=3;j++)
	{
		for(int k=1; k<=10; ++k)
		{
			cout<<" "<<a[4][j][k];
		}
		cout<<endl;
	}
	return 0;
}