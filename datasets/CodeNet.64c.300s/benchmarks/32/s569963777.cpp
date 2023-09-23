#include<iostream>
using namespace std;
int main(){
	int i,n,big=-1000000,little=1000000;
	long long int sum=0;
	cin>>i;
	for(;i>0;i--){
		cin>>n;
		sum+=n;
		if(n>big){
			big=n;
		}
		if(n<little){
			little=n;
		}
	}
	cout<<little<<' '<<big<<' '<<sum<<endl;
	return 0;
}