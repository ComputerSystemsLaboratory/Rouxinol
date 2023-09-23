#include<iostream>

using namespace std;

int main(){

	int a, b, c;

	cin >> a >> b >> c;

	if (a < b)
		if (b < c) cout << "Yes\n";
		else cout << "No\n";
	else
		cout << "No\n";
}