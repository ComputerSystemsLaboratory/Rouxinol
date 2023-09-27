#include<iostream>
using namespace std;
long long result;
long long mbak;
void power(long long m,long long n)//m的n次方 
{
	if(n==0)
	{
		result=1;
		return;
	}	
	if(n==1)
	{
		result=(m*result%1000000007);
		return ;
	}
	if(n%2==0)
	{
		power((m*m)%1000000007,n/2);
		return ;
	} 
	result=(m*result)%1000000007;
	power(m,n-1);

}
int main()
{
	result=1;
	long long m;
	long long n;
	cin>>m>>n;
	mbak=m;
	m=m%1000000007;
	power(m,n); 
	//cout<<10460353203%1000000007<<endl;
	cout<<result<<endl;
	return 0;
} 
