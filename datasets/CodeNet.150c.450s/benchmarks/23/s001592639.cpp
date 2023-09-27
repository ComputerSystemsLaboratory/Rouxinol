#include <iostream>
using namespace std;
int fib(int n,int num1,int num2);
int main(void)
{
	int n;
	cin >> n;
	cout << fib(n,1,0) << endl;
	return 0;
}
int fib(int n,int num1,int num2)
{
	if(n<2) return num1+num2;
	return fib(n-1,num1+num2,num1);
}