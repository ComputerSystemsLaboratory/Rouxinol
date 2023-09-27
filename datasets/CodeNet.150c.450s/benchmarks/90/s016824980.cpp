#include<iostream>

using namespace std;

int main(void)
{
	int n;
	int a[101]={0};
	while(cin>>n)
	{
		a[n]++;
	}
	int max=0;
	for(int i=0;i<101;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(int i=0;i<101;i++)
	{
		if(a[i]==max)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}