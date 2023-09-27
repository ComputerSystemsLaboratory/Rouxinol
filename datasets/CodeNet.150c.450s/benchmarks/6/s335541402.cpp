#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main(){

	array<int, 3> temp;
	for (auto& a : temp) {
		cin >> a;
	}
	if ( temp[0] < temp[1] && temp[1] < temp[2]) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}