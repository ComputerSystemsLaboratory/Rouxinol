#include <iostream>
#include <string>
using namespace std;


int main()
{
	string str;
	int q;
	cin >> str >> q;

	for (int i = 0;i < q;i++) {
		string order;
		int a, b;
		cin >> order >> a >> b;

		if (order == "replace") {
			string p;
			cin >> p;

			str = str.replace(a, b-a+1, p);
		}
		else if (order == "reverse") {
			string rev;
			rev = str[b];

			for (int j = b - 1;j >= a;j--) {
				rev += str[j];
			}

			str = str.replace(a, b-a+1, rev);
		}
		else {
			cout << str.substr(a, b - a + 1) << endl;
		}
	}

    return 0;
}

