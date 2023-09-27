#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int judge(string t, string h)
{
	int comp_num;
	int ret_if_draw;
	if (t.size() > h.size())
	{
		comp_num = h.size();
		ret_if_draw = 1;
	}
	else if (t.size() < h.size())
	{
		comp_num = t.size();
		ret_if_draw = -1;
	}
	else
	{
		comp_num = t.size();
		ret_if_draw = 0;
	}
	transform(t.begin(), t.end(), t.begin(), ::tolower);
	transform(h.begin(), h.end(), h.begin(), ::tolower);
	for (int i = 0; i < comp_num; i++)
	{
		if (t[i] != h[i])
		{
			return (int)(t[i] - h[i]);
		}
	}
	return ret_if_draw;
}

int main()
{
	int n;
	cin >> n;
	string hand_t, hand_h;
	int point_t = 0;
	int point_h = 0;
	int res;
	for (int i = 0; i < n; i++)
	{
		cin >> hand_t >> hand_h;
		res = judge(hand_t, hand_h);
		if (res > 0)
		{
			point_t += 3;
		}
		else if (res < 0)
		{
			point_h += 3;
		}
		else
		{
			point_t++;
			point_h++;
		}
	}
	cout << point_t << " " << point_h << endl;
}
