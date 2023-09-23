#include <iostream>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int a[n][m], b[m];
	for (int i = 0; i < n; i++)
	{
		for (int j= 0; j < m; j++)
		{
			cin>>a[i][j];/* code */
		}
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>b[i];/* code */
	}

	int c[n-1];
	for (int i = 0; i <n; ++i)
	{
		c[i]=0;/* code */
	}
	for(int j=0;j<n;++j)
	{
		for(int i=0;i<m;++i) 
			{
				
				c[j]+=a[j][i]*b[i];
				
			}
	}
	
	
	for (int i = 0; i < n; ++i)
	{
		cout<<c[i]<<endl;
	}
	return 0;
}