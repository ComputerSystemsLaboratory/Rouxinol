#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define rep(i, j) for(int i = 1; i < j; i++)
#define dia(i, j) i * i + j* j
#define all(i) i.begin(), i.end()
using namespace std;
struct dat_st { int h, w, num; };
bool compare(dat_st &t0, dat_st &t1)
{
	if (t0.num == t1.num)
	{
		return t0.h < t1.h;
	}
	return t0.num < t1.num;
}
int num(int x, int y)
{
	int num = x * x + y * y;
	return num;
}
int main()
{
	vector<dat_st> cul(0);
	rep(h, 151) rep(w, 151)
	{
		if (h < w && h != w)
		{
			cul.push_back({ h, w, dia(h, w) });
		}
	}
	sort(all(cul), compare);
	int h, w; while (cin >> h >> w, h, w)
	{
		if (h == 1 && w == 2) { printf("1 3\n"); }
		rep(i, (int)cul.size())
		{
			if (cul[i].h == h && cul[i].w == w)
			{
				printf("%d %d\n", cul[i + 1].h, cul[i + 1].w);
				break;
			}
		}
	}
	return 0;
}