#include <iostream>
using namespace std;

int main()
{
	int i;
	int x;

	while(1){
		cin >> x;
		if(x>=1 && x<=100)
			break;
	}

	x=x*x*x;

	cout<<x<<endl;

	return 0;
}