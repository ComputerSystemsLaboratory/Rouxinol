#include <iostream>
using namespace std;

int main()
{
	int a,b;
	int s,l;

	while(1){
		cin >> a >> b;
		if(a >= 1 && a <= 100 && b >= 1 && b<=100)
			break;
	}

	s = a*b;
	l = a*2+b*2;

	cout<< s << " " << l << endl;

	return 0;
}