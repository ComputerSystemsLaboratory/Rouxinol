#include<iostream>

using namespace std;

int main(void)
{
	int S[10005],T[505],n,q;
	
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>S[i];
		}
		cin>>q;
		for(int j=0;j<q;j++)
		{
			cin>>T[j];
		}
		
		int count=0;
		
		for(int i=0;i<q;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(T[i]==S[j])
				{
					count++;
					break;
				}
			}
		}
		cout<<count<<endl;
	}
	
	return 0;
}