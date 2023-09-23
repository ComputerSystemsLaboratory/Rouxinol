#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <complex>
#include <ctime>
#include <cstdlib>

using namespace std;

inline int to_int(string s) {int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string to_str(T x) {ostringstream sout; sout << x; return sout.str();}

typedef long long ll;

//wide:幅 tall:高さ no:通れない場所の座標 memo:メモ配列
int wide, tall, num, no[16][16], memo[16][16];

int road(int x, int y)
{

	if(x > wide-1 || y > tall-1 || (no[x][y] == 1) )
	{
		return 0;
	}
	else if(memo[x][y] >= 0)
	{
		return memo[x][y];
	}
	else if(x == wide-1 && y == tall-1)
	{
		return 1;
	}
	else
	{
		return memo[x][y] = road(x+1, y) + road(x, y+1);
	}
}

int main()
{
	while(cin >> wide >> tall)
	{
		if(!wide && !tall)
			break;
		cin >> num;

		memset(memo, -1, sizeof(memo));
		memset(no, 0, sizeof(no));

		int wk, tk;
		for(int i = 0; i < num; i++)
		{
			cin >> wk >> tk;
			no[wk-1][tk-1] = 1;
		}
		cout << road(0, 0) << endl;
	}
}