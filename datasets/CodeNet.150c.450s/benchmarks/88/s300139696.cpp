#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <functional>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define CLR(a) memset((a), 0 ,sizeof(a))
#define MCLR(a) memset((a), -1 ,sizeof(a))
#define SZ(a) (sizeof(a))
#define FILL(a,v) fill((int*)a,(int*)(a+(SZ(a)/SZ(*(a)))),v)
bool cheak(int x, int y, int xMax, int yMax){return x >= 0 && y >= 0 && xMax > x && yMax > y;}
const int dx[4] = { -1, 0, 1, 0 }, dy[4] = { 0, 1, 0, -1 };
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;
const int mod = 10007;
const int INF = 2147483647;

int main()
{
	int h,w;

	while (cin >> h >> w && h){
		int len = h*h + w*w;

		int th = 151, tw = 151;
		for (int i = 1; i <= 151; i++){
			for (int j = 1; j < i; j++){
				int nlen = i*i + j*j;
				int tlen = th*th+tw*tw;
				if (len  < nlen || (len  == nlen && h < j))
				if (nlen < tlen || (nlen == tlen && j < th)){
					th = j, tw = i;
				}
			}
		}

		cout << th << " " << tw << endl;
	}
}