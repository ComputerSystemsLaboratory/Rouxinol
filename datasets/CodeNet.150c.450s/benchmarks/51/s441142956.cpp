#include <iostream>
using namespace std;
int main()
{

	int num[30], n;

	for (int i = 0; i < 30; i++) num[i] = 0;

	for (int i = 0; i < 28; i++){
		cin >> n;
		num[n - 1] = 1;
	}
	for (int i = 0; i < 30; i++){
		if (num[i] == 0)
			cout << i + 1 << endl;
	}

}