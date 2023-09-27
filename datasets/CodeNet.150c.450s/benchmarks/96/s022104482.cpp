#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <cstring>
#include <cctype>
#include <sstream>
#include <set>
#include <map>
#include <queue>
#include <complex>
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		string input;
		cin >> input;
		int btn[9] = {};
		for(int j=0; j<input.size(); j++) {
			if(input[j] != '0') {
				btn[(int)input[j] - '0' - 1]++;
			}
			else {
				for(int k=0; k<9; k++) {
					if(btn[k] > 0) {
						if(k == 0) {
							if(btn[k]%5 == 1) cout << '.';
							if(btn[k]%5 == 2) cout << ',';
							if(btn[k]%5 == 3) cout << '!';
							if(btn[k]%5 == 4) cout << '?';
							if(btn[k]%5 == 0) cout << ' ';
						}
						else if(k == 1) {
							if(btn[k]%3 == 1) cout << 'a';
							if(btn[k]%3 == 2) cout << 'b';
							if(btn[k]%3 == 0) cout << 'c';
						}
						else if(k == 2) {
							if(btn[k]%3 == 1) cout << 'd';
							if(btn[k]%3 == 2) cout << 'e';
							if(btn[k]%3 == 0) cout << 'f';
						}
						else if(k == 3) {
							if(btn[k]%3 == 1) cout << 'g';
							if(btn[k]%3 == 2) cout << 'h';
							if(btn[k]%3 == 0) cout << 'i';
						}
						else if(k == 4) {
							if(btn[k]%3 == 1) cout << 'j';
							if(btn[k]%3 == 2) cout << 'k';
							if(btn[k]%3 == 0) cout << 'l';
						}
						else if(k == 5) {
							if(btn[k]%3 == 1) cout << 'm';
							if(btn[k]%3 == 2) cout << 'n';
							if(btn[k]%3 == 0) cout << 'o';
						}
						else if(k == 6) {
							if(btn[k]%4 == 1) cout << 'p';
							if(btn[k]%4 == 2) cout << 'q';
							if(btn[k]%4 == 3) cout << 'r';
							if(btn[k]%4 == 0) cout << 's';
						}
						else if(k == 7) {
							if(btn[k]%3 == 1) cout << 't';
							if(btn[k]%3 == 2) cout << 'u';
							if(btn[k]%3 == 0) cout << 'v';
						}
						else if(k == 8) {
							if(btn[k]%4 == 1) cout << 'w';
							if(btn[k]%4 == 2) cout << 'x';
							if(btn[k]%4 == 3) cout << 'y';
							if(btn[k]%4 == 0) cout << 'z';
						}
						for(int l=0; l<9; l++) btn[l] = 0;
						break;
					}
				}
			}
		}
		cout << endl;
	}
	return 0;
}