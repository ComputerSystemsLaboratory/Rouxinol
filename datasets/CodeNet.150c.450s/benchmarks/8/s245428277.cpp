#include <iostream>
#include <string>
using namespace std;


int main()
{
	int n, taro=0, hanako=0;
	cin >> n;

	for (int i = 0;i < n;i++) {
		string a1, a2;
		cin >> a1 >> a2;

		if (a1 == a2) {
			taro++;
			hanako++;
		}
		else if (a1 > a2) {
			taro += 3;
		}
		else
		{
			hanako += 3;
		}
	}

	cout << taro << " " << hanako << endl;
    return 0;
}

