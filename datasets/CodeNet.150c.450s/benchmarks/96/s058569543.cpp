#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
#define REP(i, a, n) for(int i=a; i<n; i++)

int main()
{
	int n;
	char str1[5] = { '.', ',', '!', '?', ' '};
	char strtop[8] = { 'a', 'd', 'g', 'j', 'm', 'p', 't', 'w' };
	cin >> n;

	REP(i, 0, n) {
		string str;
		cin >> str;
		int cnt = 0;
		char prev = '0';
		REP(j, 0, str.size()) {
			char sub = str[j];
			if (sub == prev && sub == '0') {
				continue;
			}
			else if (sub == prev) {
				cnt++;
			}
			else if (sub == '0') {
				if (prev == '1') cout << str1[cnt % 5];
				else if (prev == '7' || prev == '9') cout << (char)(strtop[(prev - '0')-2] + (cnt % 4));
				else cout << (char)(strtop[(prev - '0') - 2] + (cnt % 3));
				cnt = 0;
			}

			prev = sub;
		}
		cout << endl;
	}

	return 0;
}