#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() 
{
	vector<int>s(0);
	for (int a = 0; a < 28; a++) {
		int b;
		cin >> b;
		s.push_back(b - 1);
	}
	sort(s.begin(), s.end());
	vector<int>d(0); int f = 0;
	for (int e = 0; e < 30; e++) {
		if (s[e] != e+f) {
			d.push_back(e+f);
			if (f)break;
			f++;
		}
	}
	sort(d.begin(), d.end());
	cout << d[0] + 1 <<endl << d[1] + 1 << endl;
}