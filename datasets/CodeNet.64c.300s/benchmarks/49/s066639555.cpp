# include <iostream>
using namespace std;
int main(){
	int a, b;
	long int sum=0;
	int n = 0;
	while (cin >> a >> b)
	{
		sum = a + b;
	
	
	while (sum>=1)
	{
		++n;
		sum /= 10;
		
	}
	cout << n << endl;
	n = 0;

	}
	return 0;
	
	/*Javad SHeybani*/
}