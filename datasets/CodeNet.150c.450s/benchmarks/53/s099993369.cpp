#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
	int n,i;
	
	cin >> n;
	
	cout << n << ":";
	
	for(i=2;n!=1;i++)
	{
		if(i>sqrt(n))
		{
			cout << " " << n;
			n=1;
			continue;
		}
		while(n%i==0)
		{
			cout << " " << i;
			n/=i;
		}
	}
	cout << endl;
	
	return 0;
}