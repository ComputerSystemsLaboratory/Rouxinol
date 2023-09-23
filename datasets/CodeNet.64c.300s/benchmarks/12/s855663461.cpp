#include <iostream>
 
using namespace std;

int Cubic(int x)
{
	return(x*x*x);
}

int main()
{
	int x;

	cin >> x;

	x = Cubic(x);

	cout<<x<<endl;

	//while(1);

	return 0;
}