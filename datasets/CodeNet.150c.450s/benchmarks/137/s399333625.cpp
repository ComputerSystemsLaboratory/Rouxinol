#include "iostream"
#include "string.h"

using namespace std;

static const int MAX = 1048576;
static const int LEN = 14;

int makeKey( char str[LEN] ) {
	int key = 0, x;

	int l = strlen(str);

	for (int i = 0; i < 9; i++) {
		x = 0;
		if (i < l) {
			if (str[i] == 'A') x = 0;
			else if (str[i] == 'C') x = 1;
			else if (str[i] == 'G') x = 2;
			else if (str[i] == 'T') x = 3;
		}
		key = key * 4 + x;
	}
	return key * 4;
}

bool same( char str[LEN], char str2[LEN] ) {
	int l = strlen(str);
	if( l != strlen(str2)) return false;
	
	for (int i = 0; i < l; i++) {
		if (str[i] != str2[i]) return false;
	}
	return true;
}

char dic[MAX][LEN];

int main() {

	int lnum;
	char com[9], str[LEN];
	bool used[MAX];

	cin >> lnum;

	for (int i = 0; i < MAX; i++) {
		used[i] = false;
	}

	for (int i = 0; i < lnum; i++) {
		cin >> com;
		cin >> str;

		if (com[0] == 'i') {
			
			int k = makeKey(str);
			if (k >= MAX) {
				//cout << "RE" << endl;
			}
			while (used[k]) {
				k += 11;
				if (k >= MAX) k -= MAX;
			}
			int i;
			for (i = 0; i < strlen(str); i++) {
				dic[k][i] = str[i];
			}
			dic[k][i] = '\0';
			used[k] = true;
			
		}
		else if( com[0] == 'f' ){
			
			bool found = false;
			int k = makeKey(str);
			if (k >= MAX) {
				//cout << "RE" << endl;
			}
			
			while (used[k]) {
				int i;
				char s[LEN];
				for (i = 0; i < strlen(dic[k]); i++) {
					s[i] = dic[k][i];
				}
				s[i] = '\0';
				if (same(str,s)) {
					found = true;
					cout << "yes" << endl;
					break;
				}
				k += 11;
				if (k >= MAX) k -= MAX;
			}
			if (!found) cout << "no" << endl;
		
		}
	}

	return 0;
}