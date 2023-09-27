#include <iostream>
#include <utility>

using namespace std;

typedef std::pair<int, int> REC;

bool isLarger(REC rec1, REC rec2)
{
	int ret = (rec1.first*rec1.first + rec1.second*rec1.second ) - ( rec2.first*rec2.first + rec2.second*rec2.second);

	if (ret > 0)
		return true;
	if (ret < 0)
		return false;

	if (rec1.first > rec2.first)
		return true;
	return false;
}

int main()
{
	REC in, out, max(150, 150);

	while(1)
	{
		cin >> in.first >> in.second;
		if (in == make_pair(0, 0))
			break;

		out = max;
		for(int h = 1; h <= max.first; ++h)
		{
			for(int w = h + 1; w <= max.second; ++w)
			{
				auto temp = make_pair(h, w);
				if (isLarger(temp, in) && !isLarger(temp, out))
					out = temp;
			}
		}

		cout << out.first << " " << out.second << endl;
	}
}