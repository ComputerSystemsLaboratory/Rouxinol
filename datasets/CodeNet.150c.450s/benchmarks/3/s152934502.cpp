#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	string original;
	int n;
	getline(cin, original);
	cin >> n;
	//cout << original << endl;
	//cout << n << endl;
	while (n--) {
		string order;
		cin >> order;
		int a, b;
		cin >> a >> b;
		if (order == "print") {
			cout << original.substr(a, b - a + 1) << endl;
		}
		else if (order == "replace") {
			string tmp;
			cin >> tmp;
			for (int i = a; i <= b; i++) {
				original[i] = tmp[i - a];
			}
			//cout << "replace ????????????" << original << endl;
		}
		else if (order == "reverse") {
			string tmp = "";
			for (int i = b; i >= a; i--) {
				tmp += original[i];
			}
			//cout << tmp << endl;
			for (int i = a; i <= b; i++) {
				original[i] = tmp[i - a];
			}
			//cout << "reverse ????????????" << original << endl;
		}
	}

	return 0;
}