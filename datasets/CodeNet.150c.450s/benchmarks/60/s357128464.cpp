#include<iostream>
using namespace std;
int graph[105][105];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			graph[i][j]=0;
	}
	for(int i=1;i<=n;i++)
	{
		int v;
		cin>>v;
		int num;
		cin>>num;
		while(num--)
		{
			int aa;
			cin>>aa;
			graph[v-1][aa-1]=1;
			//cout<<v-1<<" "<<aa<<endl;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j>0)
			cout<<" ";
			cout<<graph[i][j];
		}
		cout<<endl;
	}
	return 0;
} 
