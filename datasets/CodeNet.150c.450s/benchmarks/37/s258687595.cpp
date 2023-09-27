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
	int a,b,c,d,e,f;
	while(scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF)
	{
		float ad = (float)d / (float)a;
		float y = ((float)c * ad - (float)f) / ((float)b * ad - (float)e);
		float x = ((float)c - (float)b*y)/(float)a;
		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}