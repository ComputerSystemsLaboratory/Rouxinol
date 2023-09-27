#include <iostream>
#include <vector>
using namespace std;


int main() {
	int r, c;
	cin >> r >> c;
	vector<int> vec(c, 0);
	int total=0;
	for (int row=0; row!=r; ++row){
		int rowsum = 0;
		for (int col=0; col!=c; ++col){
			int val;
			cin >> val;
			cout << val << ' ';
			vec[col] += val;
			rowsum += val;
		}
		cout << rowsum << endl;
		total += rowsum;
	}
	for (auto v: vec){
		cout << v << ' ';
	}
	cout << total << endl;
	return 0;
}