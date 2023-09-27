#include<iostream> 
#include<string> 

using namespace std;

int main() {
	string str, cmd;
	int a, b, q;
	cin >> str >> q;
	for (int i = 0; i < q; i++) {
		cin >> cmd >> a >> b;
		if (cmd == "print") {
			for (int j = a; j <= b; j++)
				cout << str[j]; cout << endl;
		}
		else if (cmd == "reverse") {
			int fend = (b - a + 1) / 2;
			for (int j = 0; j < fend; j++)
				swap(str[a++], str[b--]);
		}
		else if (cmd == "replace") {
			string p; int n = 0;
			cin >> p;
			for (int k = a; k <= b; k++) {
				str[k] = p[n++];
			}
		}
	}
	return 0;
}