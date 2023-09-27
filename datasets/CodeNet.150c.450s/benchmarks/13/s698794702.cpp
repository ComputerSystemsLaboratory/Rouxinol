#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char s[101], s2[101], p[101];
	cin >> s;
	cin >> p;

	strcpy(s2, s);
	strcat(s, s2);

	if (strstr(s, p) == NULL)
		cout << "No" << endl;
	else cout << "Yes" << endl;

	return 0;
}