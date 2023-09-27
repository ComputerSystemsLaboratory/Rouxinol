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
	char buf[21];
	char ans[21];
	scanf("%s", buf);
	int i = 0;
	for (;i < 21; i++)
	{
		if (buf[i] == '\0') break;
	}
	i--;
	for (int j = 0; j <= i; j++)
	{
		ans[j] = buf[i-j];
	}
	ans[i+1] = '\0';
	printf("%s\n", ans);
	return 0;
}