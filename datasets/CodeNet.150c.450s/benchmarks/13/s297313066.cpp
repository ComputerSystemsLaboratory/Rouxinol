#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

#define MAX 26

int main(void)
{
	string s,p;
	string tmp;
	int i,j,k;
	bool flg = false;

	getline(cin, s);
	getline(cin, p);

	for (i=0; i<s.size(); i++) {
		if (s[i] == p[0]) {
			k=i;
			for (j=0; j<p.size(); j++) {
				if (s[k] != p[j]) {
					break;
				}
				if ((k+1 >= s.size())) {
					k = 0;
				}
				else {
					k++;
				}
			}
			if (j == (p.size())) {
				flg = true;
				break;
			}
		}
	}
	if (flg == true) {
		cout << "Yes" <<endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}


