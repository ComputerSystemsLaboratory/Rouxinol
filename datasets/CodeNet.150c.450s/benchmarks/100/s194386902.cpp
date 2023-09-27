#include <iostream>
using namespace std;

int main(void){
	int n;
	long long int sum,i;
	cin>>n;
	sum=1;
	for(i=1;i<=n;i++){
		sum=i*sum;
	}
	cout<<sum<<endl;

	return 0;
}