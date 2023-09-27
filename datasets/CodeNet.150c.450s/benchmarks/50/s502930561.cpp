#include <iostream>
using namespace std;

int main(void)
{
	int much;

	while(cin >> much, much > 0){
		int c = 0;

		much = 1000 - much;

		if(much >= 500){
			c += (int)(much / 500);
			much %= 500;
		}
		if(much >= 100){
			c += (int)(much / 100);
			much %= 100;
		}
		if(much >= 50){
			c += (int)(much / 50);
			much %= 50;
		}
		if(much >= 10){
			c += (int)(much / 10);
			much %= 10;
		}
		if(much >= 5){
			c += (int)(much / 5);
			much %= 5;
		}
		c += much;

		cout << c << endl;

	}

	return 0;
}