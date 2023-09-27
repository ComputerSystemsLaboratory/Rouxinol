#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() 
{
	while (1) 
	{
		int a;
		cin >> a;
		if (a == 0)break;
		if (a == 1 || a == 2 || a == 3) { cout << 1 << endl; continue; }
		vector<int>s(4);
		s[0] = 1; s[1] = 2; s[2] = 4;
		for (int c = 0; c < a - 3; c++) {
			s[3] = s[2] + s[1] + s[0];
			s[0] = s[1];
			s[1] = s[2];
			s[2] = s[3];
		}
		cout << s[2] /3650+1 << endl;
	}
}