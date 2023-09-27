#include<iostream>}

#include<cstdio>

using namespace std;

int main()
{
	int a;
	int b;
	int i = 1;
	while (1)
	{
		cin >> a >> b;
		if (a == 0 && b == 0){
			break;
		}
		if (a > b){
			cout << b << " " << a << endl;
		}
		else{
			cout << a << " " << b << endl;
		}
	}

	return 0;
}