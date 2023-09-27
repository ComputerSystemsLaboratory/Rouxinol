#include <iostream>
#include <string>

using namespace std;

#define M 16777216 // 4^12
#define L 14

int H[M][L] = { 0 };

int getChar(char ch) {
	if (ch == 'A') return 0;
	else if (ch == 'C') return 1;
	else if (ch == 'G') return 2;
	else if (ch == 'T') return 3;
}

/* convert a string into an integer value */
long long getKey(string str) {
	long long sum = 0, p = 1, i;
	for (i = 0; i < str.size(); i++) {
		sum += p * (getChar(str[i]));
		p *= 4;
	}
	return sum;
}

int find(string str) 
{
	return H[getKey(str)][str.size()];
}

int insert(string str) 
{
	return ++H[getKey(str)][str.size()];
}

int main() {
	int i, n;
	string str, cmd;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> cmd >> str;
		if (cmd == "insert") {
			insert(str);
		}
		else if (cmd == "find")
		{
			if (find(str)) {
				cout << "yes" << endl;
			}
			else {
				cout << "no" << endl;
			}
		}
	}
	return 0;
}
