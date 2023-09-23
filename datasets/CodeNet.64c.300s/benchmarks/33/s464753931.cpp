#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a, b,x;
	char ap='+';
	while (1){
		cin >> a >> ap >> b;
		if (ap == '+')
			x = a + b;
		else if (ap == '-')
			x = a - b;
		else if (ap == '*')
			x = a*b;
		else if (ap == '/')
			x = a / b;
		else if (ap == '?')
			break;
		cout << x<<endl;
	}
	return 0;
}