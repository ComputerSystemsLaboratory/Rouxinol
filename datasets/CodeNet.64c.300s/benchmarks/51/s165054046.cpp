#include<iostream>
using namespace std;

int main()
{
	long long int a[100];
	int n;
	a[1]=1;
	for(int i=2;i<=20;i++){
		a[i]=a[i-1]*i;
	}
	cin>>n;
	cout<<a[n]<<endl;
	return 0;
}