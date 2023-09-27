#include<iostream>
using namespace std;

int main()
{
	int ans[5];
	cin>>ans[0]>>ans[1]>>ans[2]>>ans[3]>>ans[4];
	for(int i=0;i<5;i++)
	{
		for(int j=4;j>i;j--)
		{
			if(ans[j]>ans[j-1])
			{
				int tmp=ans[j];
				ans[j]=ans[j-1];
				ans[j-1]=tmp;
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		if(i!=0) cout<<" ";
		cout<<ans[i];
	}
	cout<<endl;
	return 0;
}