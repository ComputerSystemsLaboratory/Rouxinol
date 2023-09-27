#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

// unsigned int e[101];
// unsigned int d[101];
char e[101][2];
char d[101][2];

unsigned int bublesort(unsigned int n)
{
	unsigned int num = 0;

	bool flag = true;
	while (flag) {
		flag = false;
		for (unsigned int i = n-1; i > 0; --i) {
			if (e[i][1] < e[i-1][1]) {
				char x = e[i-1][1];
				char y = e[i-1][0];
				e[i-1][0] = e[i][0];
				e[i-1][1] = e[i][1];
				e[i][0] = y;
				e[i][1] = x;
				flag = true;
				++num;
			}
		}
	}

	return num;
}

unsigned int selectionsort(unsigned int n)
{
	unsigned int num = 0;
	for (unsigned int i = 0; i < n; ++i) {
		unsigned int minj = i;
		for (unsigned int j = i+1; j < n; ++j) {
			if (d[j][1] < d[minj][1]) {
				minj = j;
			}
		}
		if (i != minj) {
			char s = d[i][0];
			char t = d[i][1];
			d[i][0] = d[minj][0];
			d[i][1] = d[minj][1];
			d[minj][0] = s;
			d[minj][1] = t;
			++num;
		}
	}

	return num;
}

int main()
{
	unsigned int n;
	unsigned int num;
	cin >> n;
	for (unsigned int i = 0; i < n; ++i) {
		string c;
		cin >> c;
		d[i][0] = e[i][0] = c[0];
		d[i][1] = e[i][1] = c[1];
	}

	num = bublesort(n);
	for (unsigned int i = 0; i < n - 1; ++i) {
		cout.write(e[i], 2);
		cout.put(' ');
	}
	cout << e[n-1] << "\n";
	cout << "Stable"<< endl;

	num = selectionsort(n);
	for (unsigned int i = 0; i < n - 1; ++i) {
		cout.write(d[i], 2);
		cout.put(' ');
	}
	cout << d[n-1] << "\n";
	bool bStable = true;
	for (unsigned int i = 0; i < n - 1; ++i)
		if (d[i][0] != e[i][0] || d[i][1] != e[i][1])
			bStable = false;

	if (bStable)
		cout << "Stable"<< endl;
	else
		cout << "Not stable"<< endl;

		
	return 0;
}

