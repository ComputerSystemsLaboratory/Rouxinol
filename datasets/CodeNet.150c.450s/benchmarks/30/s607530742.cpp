#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> line;
	int pro, time;
	cin >> time;
	for (int i = 0; i < time; ++i) {
		cin >> pro;
		line.push_back(pro);
	}
	vector<int>::iterator he;
	int ans=0;
	vector<int>::iterator doll;
	for (he = line.begin() ; he < (line.end() - 1); ++he) {
		doll = he;
		for (vector<int>::iterator he2 = he+1; he2 != line.end(); ++he2) {
			if (*he2 < *doll) {
				doll = he2;
			}
		}
		if (doll != he) {
			int damy;
			damy = *he;
			*he = *doll;
			*doll = damy;
			++ans;
		}
	}
	for (vector<int>::iterator he5 = line.begin(); he5 != (line.end() - 1); ++he5) {
		cout << *he5 << " ";
	}
	cout << *(line.end() - 1) << endl << ans << endl;
	cin >> time;
	return 0;
}