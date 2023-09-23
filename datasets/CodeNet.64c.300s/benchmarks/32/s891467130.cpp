#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long n,k,min=100000000,max=-100000000,sum=0;
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>k;
		if(k<min) min=k;
		if(k>max) max=k;
		sum=sum+k;
		
	}
	cout<<min<<" "<<max<<" "<<sum<<endl;
	return 0;
}