#include<iostream>
using namespace std;
int main(){
	long long n,i,sum=1;
	cin>>n;
	for(i=1;i<=n;i++){
		sum=sum*i;
	}
	cout<<sum<<endl;
	return 0;
}