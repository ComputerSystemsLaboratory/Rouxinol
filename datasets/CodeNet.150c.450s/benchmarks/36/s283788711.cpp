#include <iostream>
using namespace std;

int main()
{
	int d;
	while (cin >> d){
		long long int area = 0;
		for (int i = 0; d * i < 600; i++){
			area += i * d * i * d * d;
		}
		cout << area << endl;
	}
}