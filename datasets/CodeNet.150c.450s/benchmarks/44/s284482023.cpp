#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main() {
	int a1,a2,a3,a4,b1,b2,b3,b4,k,l,m,hit,blow;
	vector<int> s,t,u;
	while (cin>>a1>>a2>>a3>>a4>>b1>>b2>>b3>>b4) {
		hit = 0;
		blow = 0;
		s.clear();
		t.clear();
		s.push_back(a1);
		s.push_back(a2);
		s.push_back(a3);
		s.push_back(a4);
		t.push_back(b1);
		t.push_back(b2);
		t.push_back(b3);
		t.push_back(b4);
		for (k = 0; k < 4; k++) {
			if (s[k] == t[k]&&s[k]>=0) {
				hit += 1;
				s[k] = -1;
				t[k] = -1;
			}
		}
		for (l = 0; l < 4; l++) {
			for (m = 0; m < 4; m++) {
				if (s[l] == t[m] && s[l] > 0) {
					blow += 1;
					s[l] = -1;
					t[m] = -1;
				}
			}
		}
		cout << hit << " " << blow << endl;
	}
	return 0;
}