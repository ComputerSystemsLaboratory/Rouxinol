#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define rep(i, a, j) for(int i = a; i < j; i++)
#define all(i) i.begin(), i.end()
using namespace std;
struct dat_st { int h, w, num; };
bool compare(const dat_st &t0, const dat_st &t1)
{
    if (t0.num == t1.num)
    {
        return t0.h < t1.h;
    }
    return t0.num < t1.num;
}
int dia(int x, int y)
{
    return x * x + y * y;
}
int main()
{
    vector<dat_st> cul(0);
    rep(h, 1, 151) rep(w, 1, 151)
    {
        if (h < w && h != w) { cul.push_back({ h, w, dia(h, w) }); }
    }
    sort(all(cul), compare);
    int h, w; while (cin >> h >> w, h, w)
    {
        auto p = upper_bound(all(cul), dat_st{ h,w,dia(h,w) }, compare) - cul.begin();
		printf("%d %d\n", cul[p].h, cul[p].w);
    }
}