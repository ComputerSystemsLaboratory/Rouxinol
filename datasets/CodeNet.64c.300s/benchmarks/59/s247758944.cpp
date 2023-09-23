#include <bits/stdc++.h>
using namespace std;

int isPrime(int);

int main(){
	int n;
	cin>>n;
	int sum=0;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin>>x;
		sum+=isPrime(x);
	}
	cout<<sum<<endl;
	
return 0;
}

int isPrime(int x){
	if(x==2) return 1;
	if(x<2 || x%2==0) return 0;
	for (int i = 3; i*i<=x ; i=i+2)
	{
		if (x%i==0) return 0;
	}
	return 1;
}