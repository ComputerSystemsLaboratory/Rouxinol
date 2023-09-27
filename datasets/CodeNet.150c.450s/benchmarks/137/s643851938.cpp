#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<list>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cstdio>
//#include<cmath>
using namespace std;

int dic[2000000];

int h(string &s)
{
	int value = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'A')
			value += 1;
		else if (s[i] == 'G')
			value += 2;
		else if (s[i] == 'C')
			value += 3;
		else
			value += 4;
		if (i + 1 != s.length())
			value *= 4;
	}
	return value;
}

int main(void)
{
	int n;
	string cmd, s;
	cin >> n;
	while (n--) {
		cin >> cmd >> s;
		if (cmd[0] == 'i') {
			dic[h(s)] = 1;
		}
		else {
			if (dic[h(s)])
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}
	}
	return 0;
}
