#include <iostream>
#include <iomanip>
#define pi 3.14159265358979323846
using namespace std;

int main()
{
	long int n,a[10001],i,min,max,sum=0;
	cin>>n;
	cin>>a[1];
	min=max=sum=a[1];
	for(i=2;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<min)
			min = a[i];
		if(a[i]>max)
			max = a[i];
		sum = sum + a[i];
	}
	cout<<min<<" "<<max<<" "<<sum<<endl; 
	return 0;
}
