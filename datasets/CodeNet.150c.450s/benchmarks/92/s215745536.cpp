#include<iostream>
#include<string>
using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b) {
		int c = a + b;
		string sa=to_string(c);
		cout << sa.size() << endl;
	}
	return 0;
}