#include <iostream>
using namespace std;

int main() {
	int a[10];
	for(int i=0;i<10;i++)
	cin>>a[i];
	for(int j=0;j<10;j++)
	{for(int i=0;i<10-1;i++)
	{
		if(a[i]<a[i+1])
		{
			int temp;
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}}
	for(int i=0;i<3;i++)
	cout<<a[i]<<endl;
	return 0;
}
