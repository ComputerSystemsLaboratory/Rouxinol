#include<iostream>
#include<string>
using namespace std;

int main()
{
	int  n;
	string s1, s2;
	int a = 0, b = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s1 >> s2;
		if (s1 > s2)a += 3;
		else if (s1 < s2)b += 3;
		else {
			a++;
			b++;
		}
	}
	cout << a << " " << b << endl;
    return 0;
}
