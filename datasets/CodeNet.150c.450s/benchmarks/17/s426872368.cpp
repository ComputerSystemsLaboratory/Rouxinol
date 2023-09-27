#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> s;
	int a, b, c, d, e,i,j,change;
	cin >> a >> b >> c >> d >> e;
	s.push_back(a);
	s.push_back(b);
	s.push_back(c);
	s.push_back(d);
	s.push_back(e);
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4-i; j++) {
			if (s[j] < s[j + 1]) {
				change = s[j];
				s[j] = s[j+1];
				s[j+1] = change;
			}
		}
    }
	cout << s[0] << " " << s[1] << " " << s[2] << " " << s[3] << " " << s[4] << endl;
	return 0;
}