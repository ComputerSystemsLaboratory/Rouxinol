#include <iostream>
using namespace std;

int main() {
	int a[4][13];
	int r,n;
	char s;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 13; ++j)
		{
			a[i][j]=0;/* code */
		}
	}
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin >>s>>r;
		if (s=='S') a[0][r-1]=1;
		if (s=='H') a[1][r-1]=1;
		if (s=='C') a[2][r-1]=1;
		if (s=='D') a[3][r-1]=1;/* code */
	}
	for (int s= 0; s < 4; ++s)
	{
		for (int r = 0; r < 13; ++r)
		{
			if (a[s][r]==0)
			{
				if (s==0) cout<<'S'<<" "<<r+1<<endl;
				if (s==1) cout<<'H'<<" "<<r+1<<endl;
				if (s==2) cout<<'C'<<" "<<r+1<<endl;
				if (s==3) cout<<'D'<<" "<<r+1<<endl;
			}
		}
	}


	return 0;
}