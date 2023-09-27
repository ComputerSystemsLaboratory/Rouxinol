#include<iostream>
#include<cstdio>
using namespace std;

long long pow(long long m,long long n)
{
	long long res;
	if(n==0) return 1;
	res=pow(m*m%1000000007,n/2);
	if(n%2==1) return res*m%1000000007;
	return res;
}

int main()
{
	long long m,n;
	
	cin >> m >> n;
	
	cout << pow(m,n) << endl;
	
	return 0;
}