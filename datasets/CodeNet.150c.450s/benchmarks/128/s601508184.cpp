#include<iostream>
#include<string>
using namespace std;

int main(void) {
	string name;
	cin >> name;
	int L = name.size();
	string Ans;
	for (int i = 0; i < L; i++) {
		Ans += name.substr(L-i-1, 1);
	}
	cout << Ans << endl;
	return 0;
}