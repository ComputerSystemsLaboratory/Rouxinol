#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>
#include <map>
using namespace std;

#define REP(i, b, e) for (int i = (b); i < (e); i++)
#define rep(i, n) REP(i, 0, n)

#define dump(x) cout << #x << ":" << x << endl

#define MAX_R 10
#define MAX_C 10000

int r, c;
int brd[MAX_R][MAX_C];

void change_row(int j)
{
	rep(i, c)
		brd[j][i] = (brd[j][i] + 1) % 2;
}

void change_col(int i)
{
	rep(j, r)
		brd[j][i] = (brd[j][i] + 1) % 2;
}

void count_col(int i, int *b, int *w)
{
	rep(j, r) {
		if (brd[j][i]==1)
			(*b)++;
		else
			(*w)++;
	}
}

int main()
{
	while (cin >> r >> c, r|c) {
		rep(j, r) {
			rep(i, c) {
				cin >> brd[j][i];
			}
		}

		int buf[MAX_R][MAX_C];
		memcpy(buf, brd, sizeof(brd));
		int ans = 0;
		rep(b, 1<<r) {
			memcpy(brd, buf, sizeof(buf));

			rep(j, r) {
				if ((b>>j)&1)
					change_row(j);
			}

			rep(i, c) {
				int b, w;
				b = w = 0;
				count_col(i, &b, &w);
				if (b > w)
					change_col(i);
			}

			int local_ans = 0;
			rep(j, r) {
				rep(i, c) {
					if (brd[j][i] == 0)
						local_ans++;
				}
			}
			ans = max(ans, local_ans);
		}

		cout << ans << endl;
	}
	return 0;
}