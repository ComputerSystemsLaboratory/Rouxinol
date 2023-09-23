//ITP1_4_D
#include<iostream>
using namespace std;

int main()
{
	int n,i,min,max;
	long sum=0;
	cin>>n;
	int a[n];
	
	for(i=0;i<n;i++)
	cin>>a[i];
	min = a[0];
	max = a[0];
	
	for(i=0;i<n;i++){
		if(min>a[i])
			min=a[i];
			}
			
	for(i=0;i<n;i++){
		if(max<a[i])
			max=a[i];
			}
	for(i=0;i<n;i++){
	sum += a[i];
	}
	
	cout<<min<<" "<<max<<" "<<sum<<endl;
	
	return 0;
}