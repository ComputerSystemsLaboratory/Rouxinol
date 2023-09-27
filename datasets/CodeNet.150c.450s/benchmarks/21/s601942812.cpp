#include<iostream>
using namespace std;
int cube(int n);
int main()
{
	int n,c;
	cin>>n;
	c= cube(n);
	cout<<c<<endl;
	return 0;}
	int cube(int n)
	{
	return(n*n*n);
	}
