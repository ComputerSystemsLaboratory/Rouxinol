#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <cstdlib>

using namespace std;


int main(void) {

	string s, p,s2;
	int cnt = 0, j, k ;
	bool judge = false;
	cin >> s;
	cin >> p;
	s2 = s + s;

	for (int i = 0;i < s2.length();i++) {
		if (p[0] == s2[i]) {
			k = i + 1;
			j = 1;
			cnt++;

			while (1) {
				if (cnt == p.length()) {
					judge = true;
					break;
				}
				if (p[j] != s2[k])
					break;
				
				cnt++;
				j++;
				k++;
			}
	
		}		
		if (cnt == p.length()) {
			break;
		}
		cnt = 0;
	}

	if (judge)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

		return 0;
}