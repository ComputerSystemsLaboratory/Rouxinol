#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define FOR(i,s,e) for (int i = int(s); i != int(e); i++)
#define REP(i,e) for (int i = 0; i != int(e); i++)
#define FORIT(i, A) for (auto i : A)
#define ISEQ(c) (c).begin(), (c).end()
#define PRINT(x) cout << (x) << endl
#define SZ(x) ((int)(x).size())

int main(int argc, char const *argv[])
{
	int w, n;
	scanf("%d", &w);
	scanf("%d", &n);
	vector<int> ans;
	REP(i, w)
		ans.push_back(i+1);
	REP(i, n)
	{
		int a,b;
		scanf("%d,%d", &a, &b);
		int temp = ans[a-1];
		ans[a-1] = ans[b-1];
		ans[b-1] = temp;
	}
	REP(i, SZ(ans))
	{
		printf("%d\n", ans[i]);
	}
	return 0;
}