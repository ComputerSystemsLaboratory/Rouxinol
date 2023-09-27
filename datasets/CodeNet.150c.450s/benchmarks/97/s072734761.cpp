#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <climits>
#include <queue>
#include <stack>
#include <algorithm>
#include <list>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <deque>
#include <complex>
#include <string>
#include <iomanip>
#include <sstream>
#include <bitset>
#include <valarray>
#include <iterator>
using namespace std;

typedef long long int lli;
typedef unsigned int uint;
typedef unsigned char uchar;
typedef unsigned long long ull;

#define REP(i,x) for(int i=0;i<(int)(x);i++)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();i++)
#define RREP(i,x) for(int i=(x);i>=0;i--)
#define RFOR(i,c) for(__typeof((c).rbegin())i=(c).rbegin();i!=(c).rend();i++)

//FILE *in = freopen("A", "r", stdin);

int n;

void process() {
	int data[210][2];
	memset(data, 0, sizeof(data));

	int minx=0, maxx=0, miny=0, maxy=0;

	for(int i = 1; i < n; i++) {
		int x, y;
		scanf("%d%d", &x, &y);
		switch (y)
		{
		case 0:
			data[i][0] = data[x][0] + 1;
			data[i][1] = data[x][1];

			if(maxx < data[i][0]) maxx = data[i][0];
			break;
		case 1:
			data[i][0] = data[x][0];
			data[i][1] = data[x][1] + 1;
			if(maxy < data[i][1])maxy = data[i][1];
			break;
		case 2:
			data[i][0] = data[x][0] - 1;
			data[i][1] = data[x][1];
			if(minx > data[i][0])minx = data[i][0];
			break;
		case 3:
			data[i][0] = data[x][0];
			data[i][1] = data[x][1] - 1;
			if(miny > data[i][1])miny = data[i][1];
			break;
		}
	}

	printf("%d %d\n", maxx - minx + 1, maxy - miny + 1);
}

int main() {
	while(true){
		scanf("%d", &n);
		if(n == 0) break;
		process();
	}
	return 0;
}