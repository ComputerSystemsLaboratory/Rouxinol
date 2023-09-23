#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	int a, b;
	while(cin >> a >> b){
		int max = 1, min = 1;
		for (int i = 2; ; ++i)
		{
			if(a % i == 0 && b % i == 0){
				a /= i;
				b /= i;
				max *= i;
				min *= i;
				i--;
			}
			if(a / i == 0 && b / i == 0){
				break;
			}
		}
		min *= a * b;
		cout << max << " " << min << endl;
	}
}