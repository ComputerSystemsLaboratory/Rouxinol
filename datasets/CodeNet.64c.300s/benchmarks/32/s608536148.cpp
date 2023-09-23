#include<iostream>
using namespace std;
int main(void){
	int n,a,min,max;
	long long sum;
	cin>>n;
	cin>>a;
	min=a;
	max=a;
	sum=a;
	for(int i=1;i<=n-1;i++){
		cin>>a;
		if(min>a) min=a;
		if(max<a) max=a;
		sum=sum+a;
	}
	cout<<min<<" "<<max<<" "<<sum<<endl;
	return 0;
}