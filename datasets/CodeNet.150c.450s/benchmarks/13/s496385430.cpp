#include<iostream>
#include<istream>
#include<string>
using namespace std;

int main(void) {
	string s;
	string p;
	int length_s,length_p;

		getline(cin, s);
		getline(cin, p);
		s = s + s;

		length_s = s.size();
		length_p = p.size();

		for (int t = 0; t <= length_s-length_p-1; t++) {
			if (s[t] == p[0]) {
				for (int u = 0; u <= length_p-1; u++) {
					if (s[t + u] != p[u]) {
						break;
					}
					if ((s[t + u] == p[u])&&(u==length_p-1)) {
						cout << "Yes" << "\n";
						goto end;
					}
				}
			}
		}
		cout << "No" << "\n";
		end:
	return 0;
}