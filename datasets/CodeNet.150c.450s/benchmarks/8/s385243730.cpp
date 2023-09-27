#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	int scor_a = 0;
	int scor_b = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string a, b;
		cin >> a >> b;

		if (a > b)
			scor_a += 3;
		else if (a < b)
			scor_b += 3;
		else if (a == b)
		{
			scor_a += 1;
			scor_b += 1;
		}
	}

	cout << scor_a << " " << scor_b << endl;
}