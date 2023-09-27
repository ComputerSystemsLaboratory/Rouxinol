#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int>v;
	vector<int>::iterator pv=v.begin();
	int n;
	while (cin>>n) {
		if (n == 0) {
			int x = v.size();
			cout << v[x - 1] << endl;
			v.pop_back();
			continue;
		}
		v.push_back(n);	
	}
	return 0;
}