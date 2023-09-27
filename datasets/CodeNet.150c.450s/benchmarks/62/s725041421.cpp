#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main(){

	array<int, 3> temp;
	for (auto& a : temp) {
		cin >> a;
	}
	sort(temp.begin(), temp.end());

	cout << temp[0] << ' ' << temp[1] << ' ' << temp[2] << endl;

	return 0;
}