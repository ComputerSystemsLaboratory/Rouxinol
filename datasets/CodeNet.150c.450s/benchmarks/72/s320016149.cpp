#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	string s; getline(cin, s);
	for (char c : s) {
		if (islower(c))printf("%c", toupper(c));
		else if (isupper(c))printf("%c", tolower(c));
		else cout << c;
	}
	cout << endl;
}