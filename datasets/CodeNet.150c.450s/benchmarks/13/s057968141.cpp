#include<cmath>
#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cctype>
#include<cstring>
using namespace std;



int main() {
	char s[202]; cin >> s;
	char p[101]; cin >> p;
	char s1[202];
	for (int i = 0; i < strlen(s); i++)s1[i] = s[i];

	strcat(s, s1);
	if (strstr(s, p))cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}