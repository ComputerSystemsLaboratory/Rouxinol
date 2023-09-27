#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int min=1000000,max=-1000000,x;
	long int sum=0;
	for(int i=0;i<n;i++){
		cin>>x;
		sum += x;
		min = min >= x ? x:min;
		max = max <= x ? x:max;
	}
	cout<<min<<" "<<max<<" "<<sum<<endl;
	return 0;
}