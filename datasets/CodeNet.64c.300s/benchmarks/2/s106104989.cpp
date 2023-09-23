#include<queue>
#include<cstdio>
#include<iostream>
using namespace std;


int main()
{
	int t, k, s;

	while (1)
	{
		cin >> t >> k >> s;
		if (t == -1 && k == -1 && s == -1)
			break;
		else if ((t == -1 || k == -1) || (t + k < 30))
			cout << 'F' << endl;
		else if (t + k >= 80)
			cout << 'A' << endl;
		else if (t + k < 80 && t + k >= 65)
			cout << 'B' << endl;
		else if (t + k < 65 && t + k >= 50)
			cout << 'C' << endl;
		else if ((t + k < 50 && t + k >= 30) && s < 50)
			cout << 'D' << endl;
		else
			cout << 'C' << endl;
	}
}