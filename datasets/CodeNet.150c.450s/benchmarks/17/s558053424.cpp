#include<iostream>

using namespace std;

int main(void)
{
	int a[5];
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	for(int i=0;i<5;i++)
	{
		int max=i;
		for(int j=i+1;j<5;j++)
		{
			if(a[max]<a[j])
			{
				max=j;
			}
		}
		int tmp=a[i];
		a[i]=a[max];
		a[max]=tmp;
	}
	cout<<a[0];
	for(int i=1;i<5;i++)
	{
		cout<<" "<<a[i];
	}
	cout<<endl;
}