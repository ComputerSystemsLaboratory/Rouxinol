#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int debt = 100000;
	for (int i = 0; i < n; i++){
		debt *= 1.05;
		int temp = debt % 1000;
		if (temp){
			debt += 1000 - temp;
		}
	}
	cout << debt << endl;
}