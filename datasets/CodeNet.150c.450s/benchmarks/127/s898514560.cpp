#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <cstring>
#include <numeric>
#include <algorithm>
#include <functional>
#include <array>
#include <map>
#include <queue>
#include <limits.h>
#include <set>
#include <bitset>
#include <stack>
#include <cstdlib>
#define REP(i,n) for(int i = 0; n > i; i++)
#define MOD 1000000007
using namespace std;
typedef vector<int> Ivec;
typedef pair<int, int> pii;
typedef long long int ll;
char str[101];
map<char, char> kako = { {'(',')'},{'[',']'} };

int main() {
	int m;
	scanf("%d", &m);
	REP(i, m) {
		set<string> denshas;
		char s [73];
		scanf("%s", s);

		for (int j = 1; strlen(s) > j; j++) {
			string str(s);
			string str1 = str.substr(0, j), str2 = str.substr(j,str.size()-j);
			denshas.insert((str2+str1));
			denshas.insert((str1 + str2));
			reverse(str1.begin(), str1.end());
			denshas.insert((str2 + str1));
			denshas.insert((str1 + str2));
			reverse(str1.begin(), str1.end());
			reverse(str2.begin(), str2.end());
			denshas.insert((str2 + str1));
			denshas.insert((str1 + str2));
			reverse(str1.begin(), str1.end());
			denshas.insert((str2 + str1));
			denshas.insert((str1 + str2));
		}
		printf("%d\n",denshas.size());
	}
	return 0;
}