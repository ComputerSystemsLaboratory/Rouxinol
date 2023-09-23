#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a, b;

	while (cin >> a >> b){
		cout << (int)(log10(a + b) + 1) << endl;
	}

	return 0;
}