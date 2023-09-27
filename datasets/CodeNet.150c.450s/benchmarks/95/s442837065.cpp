#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<utility>
#include<queue>
#include<string.h>
#include<string>
#include<set>
using namespace std;
typedef long long LL;
typedef pair<int, int> P;
typedef queue<P> Q;

#define _CRT_SECURE_NO_WARNINGS

int N = 0;
bool on=false;
bool lon, ron;
int main() {
	while (scanf("%d",&N),N!=0) {
		on = false; lon = false; ron = false;
		int count = 0;
		for (int i = 0; i < N; i++) {
			char s[3];
			scanf("%s", s);
			if (s[0] == 'l') {
				lon = !lon;
			}
			else {
				ron = !ron;
			}
			if (on) {
				if (!lon && !ron) {
					on = false;
					count++;
				}
			}
			else {
				if (lon&&ron) {
					on = true;
					count++;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}


