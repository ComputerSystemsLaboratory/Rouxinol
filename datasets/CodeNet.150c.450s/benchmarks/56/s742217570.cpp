#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a;
	double n;
	double max,min,sum;

	cin>>n;	
	sum=0;
	max=-1000000;
	min=1000000;
	for( int i=0; i<n; i++ ) {
		cin>>a;
		sum+=a;
		if( max < a ) {
			max=a;
		}
		if( a < min ) {
			min=a;
		}
	}
	
	cout <<setprecision(12)<<min<<" "<<max<<" "<<sum<<endl;  
    return 0;
}