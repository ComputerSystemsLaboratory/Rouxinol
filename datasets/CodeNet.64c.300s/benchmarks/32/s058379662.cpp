#include<iostream>
using namespace std;
int main(void)
{
	int i,min,max,a[10000],n;
	long sum;
	
	cin >> n;

	for(i=0 ; i<n ; i++){
		cin >> a[i];
	}

	min=a[0];
	max=a[0];
	sum=a[0];

	for(i=1 ; i<n ; i++){
		if(a[i]<min) min=a[i];
	}
	for(i=1 ; i<n ; i++){
		if(a[i]>max) max=a[i];
	}
	for(i=1 ; i<n ; i++){
		sum=sum+a[i];
	}
	cout << min << " " << max << " " << sum << endl;

	return 0;
}