#include<iostream>
#include<string>
#include<cstring>
using namespace std;

char *tmp[10] = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

char buf[2000];
string out;

int main() {
	int n;
	cin >> n;
	while(n--) {
		cin >> buf;
		int slen = strlen(buf);
		int i, j;
		
		for( i = 0; i < slen; i++ ) {
			char c = buf[i];
			j = -1;
			for( ; i < slen; i++ ) {
				if ( buf[i] == '0' )
					break;
				j++;
			}
			
			if ( j >= 0 )
				out += tmp[c-'0'][ j % strlen(tmp[c-'0'])];
		}
		cout << out << endl;
		out.clear();
	}
	return 0;
}