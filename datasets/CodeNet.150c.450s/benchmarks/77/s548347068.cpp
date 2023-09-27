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
using namespace std;

#define Getsign(n) ((n > 0) - (n < 0))

typedef vector<int> Ivec;
typedef pair<int, int> Pos;
const map<string, Pos> Dir = { //??????
	{ "N",{ 0,1 } },
	{ "S",{ 0,-1 } },
	{ "E",{ 1,0 } },
	{ "W",{ -1,0 } }
};
int main() {
	int n, m;
	
	while (scanf("%d", &n)) {
		if (!n)
			return 0;
		vector<Pos> jpos;
		for (int i = 0; n > i; i++) {
			int a, b;
			scanf("%d %d", &a, &b);
			jpos.push_back({ a,b });
		}

		Pos mpos = {10,10};
		scanf("%d", &m);
		for (int i = 0; m > i; i++) {
			char a[2];
			int b;
			scanf("%s %d", &a, &b);
			int &ch = (a[0] == 'E' || a[0] == 'W' ? mpos.first : mpos.second),
				gen = ch+(a[0] == 'E' || a[0] == 'W' ? Dir.at(a).first*b : Dir.at(a).second*b);
			int sign = Getsign(gen-ch);
			for (ch+=sign; sign*ch <= sign*gen; ch+=sign) {
				auto itr = find(jpos.begin(), jpos.end(), mpos);
				if (itr != jpos.end()) {
					jpos.erase(itr);
				}
			}
			ch-=sign;
		}
		if (jpos.size()) {
			printf("No\n");
		}
		else {
			printf("Yes\n");
		}
	}

	return 0;
}