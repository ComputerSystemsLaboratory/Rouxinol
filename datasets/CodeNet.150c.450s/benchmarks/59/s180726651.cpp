#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> line;
	int time,pro;
	cin >> time;
	for (int i = 0; i < time; ++i) {
		cin >> pro;
		line.push_back(pro);
	}
	int damy;
	vector<int>::iterator he;
	for (he = line.begin(); he != line.end()-1; ++he) {
		cout << *he << " ";
	}
	cout << *(line.end() - 1) << endl;
	int i2;
	for (int i = 1; i < time; ++i) {
		for (i2=0; *(line.begin()+i2) <*(line.begin()+i) ; ++i2) {
		}
		damy = *(line.begin() + i);
		line.erase(line.begin() + i);
		line.insert(line.begin()+i2, damy);
		for (he = line.begin(); he != line.end()-1; ++he) {
			cout << *he << " ";
		}
		cout << *(line.end() - 1) << endl;
	}
	return 0;
}