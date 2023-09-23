#include<iostream>
using namespace std;

int main(void){
	int n,a[10000],min,max;
	long long sum;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	min=a[0];
	max=a[0];
	sum=a[0];
	for(int i=1;i<n;i++){
		if(min>a[i]) min=a[i];
		if(max<a[i]) max=a[i];
		sum=sum+a[i];
	}
	cout<<min<<" "<<max<<" "<<sum<<"\n";
	return 0;
}