#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
	int H, W;

	while (cin >> H >> W, H + W)
	{
		int h[1501] = {};
		int w[1501] = {};
		map<int, int> setH;
		map<int, int> setW;

		for (int i = 1; i <= H; i++) cin >> h[i];
		for (int i = 1; i <= W; i++) cin >> w[i];

		for (int i = 1; i <= H; i++) h[i] += h[i - 1];
		for (int i = 1; i <= W; i++) w[i] += w[i - 1];

		for (int i = 0; i < H; i++)
		{
			for (int j = i + 1; j <= H; j++)
			{
				int t = h[j] - h[i];
				if (setH.count(t)) setH[t]++;
				else setH[t] = 1;
			}
		}
		for (int i = 0; i < W; i++)
		{
			for (int j = i + 1; j <= W; j++)
			{
				int t = w[j] - w[i];
				if (setW.count(t)) setW[t]++;
				else setW[t] = 1;
			}
		}

		int cnt = 0;
		for (auto i : setH)
		{
			if (setW.count(i.first)) cnt += setW[i.first] * i.second;
		}

		cout << cnt << endl;
	}

	return 0;
}