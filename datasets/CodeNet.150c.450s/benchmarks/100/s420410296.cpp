#include<iostream>

using namespace std;

int main()
{
	int n;
	long long r=1;
	cin>>n;
	
	for(int i=n;i>=1;i--){
		r*=i;
	}
	cout<<r<<endl;
		
	return 0;
}      