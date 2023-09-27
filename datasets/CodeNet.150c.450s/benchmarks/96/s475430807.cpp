#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL

string b[] = {
	"",
	".,!? ",
	"abc",
	"def",
	"ghi",
	"jkl",
	"mno",
	"pqrs",
	"tuv",
	"wxyz",
};

int main() {
	int n; cin >> n; cin.ignore();
	for (int i = 0; i < n; i++) {
		string s; getline(cin, s);
		int cnt = -1;
		for (int j = 0; j < s.size(); j++) {
			if (s[j] != '0')cnt++;
			else if (cnt != -1) {
				printf("%c", b[s[j - 1] - '0'][cnt%b[s[j - 1] - '0'].size()]);
				cnt = -1;
			}
		}
		printf("\n");
	}
	return 0;
}