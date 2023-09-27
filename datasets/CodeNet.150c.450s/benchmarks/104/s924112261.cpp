#pragma comment(linker, "/STACK:1024000000,1024000000")
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <ctime>
#include <vector>
#include <fstream>
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
const int inf = 0x3f3f3f3f;
//#define LOCAL



int main(int argc, char * argv[]) 
{
	#ifdef LOCAL
	freopen("/Users/huangjiaming/Documents/Algorithm/oj/data.in", "r", stdin);
	//freopen("/Users/huangjiaming/Documents/Algorithm/oj/data.out", "w", stdout);
	#endif

	int w, n, a[50], f, s;

	while (~scanf("%d", &w))
	{
		for (int i = 1; i <= w; i++)
			a[i] = i;
		scanf("%d", &n);
		while(n--)
		{
			scanf("%d,%d", &f, &s);
			swap(a[f], a[s]);
		}
		for (int i = 1; i <= w; i++)
			printf("%d\n", a[i]);
	}

    return 0;
}