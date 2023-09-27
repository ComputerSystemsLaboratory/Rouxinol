#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include <deque>
#include <queue>
#include <set>
#include <cmath>
#include <algorithm>
#include <map>
#include <list>
#include <cstdlib>

using namespace std;

typedef pair<int, int> P;

#define MAX 20

int main()
{
	while(1) {
		int as[MAX+1];
		multiset<int> msa;
		int a, L;
		bool end;
		int ans_j, ans_i, ans_a;

		scanf("%d %d", &a, &L);
		if(!a && !L) break;

		as[0] = a;
		for(int i = 1; i <= MAX; i++) {
			msa.clear();
			int min = 0, max = 0;
			for(int dig = 0; dig < L; dig++) {
				msa.insert(a % 10);
				a /= 10;
			}

			for(multiset<int>::iterator it = msa.begin(); it != msa.end(); it++) {
				min *= 10;
				min += *it;
			}
			for(multiset<int>::reverse_iterator rit = msa.rbegin(); rit != msa.rend(); rit++) {
				max *= 10;
				max += *rit;
			}
			a = max - min;

			end = false;
			for(int j = 0; j < i; j++) {
				if(as[j] == a) {
					end = true;
					ans_j = j;
					ans_i = i;
					ans_a = a;
					break;
				}
			}
			if(end) break;
			else as[i] = a;
		}
		printf("%d %d %d\n", ans_j, ans_a, ans_i - ans_j);
	}

	return 0;
}