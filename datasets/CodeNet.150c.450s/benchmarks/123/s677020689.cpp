#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	int pn = 0;

	for (int i = 0; i < n; i++) cin >> a[i];

	for (int i = 0; i < n; i++){
		bool flag = true;
		for (int j = 2; j < n; j++){
			if (a[i] % j == 0 && a[i] != j){
				flag = false;
				break;
			}
		}
		if (flag) pn++;
	}

	cout << pn << endl;

	return 0;
}