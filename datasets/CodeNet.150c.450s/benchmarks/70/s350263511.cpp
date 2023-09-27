#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int m, d;
	string s[] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
	int mt[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	while(cin >> m >> d){
		if(m == 0 && d == 0)
			break;

		int r;
		m--;
		int day = d;
		for(int i = 0; i < m; i++)
			day += mt[i];
		cout << s[(day - 1) % 7] << endl;
	}

	return 0;
}