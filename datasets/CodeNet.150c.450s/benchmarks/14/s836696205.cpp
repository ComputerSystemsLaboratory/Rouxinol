#include<iostream>
#include<iomanip>
#include<string>
#include<sstream>

using namespace std;

int main()
{
	int n;

	cin >> n;



	for (int i = 3; i <= n; i++) {
		if (i % 3 == 0) {
			cout << " " << i;
		}
		else {
			ostringstream os;
			string s;
			os << i;
			s = os.str();
			for (int j = 0; j < s.length(); j++) {
				if (s[j] == '3') {
					cout << " " << s;
					break;
				}
			}
		}
	}
	cout << "\n";
}