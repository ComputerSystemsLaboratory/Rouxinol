#include <iostream>
using namespace std;

int main()
{
	long long int n,i,ret=1;
	cin>>n;
	for(i=n;i>=1;i--){
		ret *= i;
	}
	cout<<ret<<endl;
	
	return 0;
}