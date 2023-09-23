#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a[10001];
	double n;
	double max,min,sum;

	cin>>n;	
	sum=0;
	max=1000000*(-1);
	min=1000000;
	for( int i=0; i<n; i++ ) {
		cin>>a[i];
		sum+=a[i];
		if( max < a[i] ) {
			max=a[i];
		}
		if( a[i] < min ) {
			min=a[i];
		}
	}
	
	cout <<setprecision(12)<<min<<" "<<max<<" "<<sum<<endl;  
    return 0;
}