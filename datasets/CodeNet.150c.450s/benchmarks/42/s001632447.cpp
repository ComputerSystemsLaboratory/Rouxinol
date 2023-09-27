#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	vector<string> name;
	vector<int> time;
	int n;
	cin >> n;
	int q;
	cin >> q;
	string damy1;
	int damy2;
	for (int i = 0; i < n; ++i) {
		cin >> damy1 >> damy2;
		name.push_back(damy1);
		time.push_back(damy2);
	}
	vector<string> nameans;
	vector<int> timeans;
	int max=0;
	int he = 0;
	while (name.begin() + he != name.end()) {
		if (*(time.begin() + he) > q) {
			*(time.begin() + he) -= q;
			max += q;
			name.push_back(*(name.begin() + he));
			time.push_back(*(time.begin() + he));
		}
		else {
			max += *(time.begin() + he);
			nameans.push_back(*(name.begin() + he));
			timeans.push_back(max);
		}
		++he;
	}
	for (int i = 0; nameans.begin() + i != nameans.end(); ++i) {
		cout << *(nameans.begin() + i) << " " << *(timeans.begin() + i) << endl;
	}
	return 0;
}