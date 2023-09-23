#include <iostream>
using namespace std;

int main()
{

	int A = 0, B = 0, point;

	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 4; j++) {
			cin >> point;
			!i ? A += point : B += point;
		}
	}

	cout << (A > B ? A : B) << endl;

	return 0;

}