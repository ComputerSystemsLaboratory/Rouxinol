#include <iostream>
using namespace std;

	int
main (void)
{
	while (1)
	{
		int h, w;
		cin >> h >> w;
		if (h == 0 && w == 0)
			break;
		int rec = h * h + w * w;
		// 縦横MAX
		int max = 150 * 150;

		// answer 
		int ans_h, ans_w;
		// 対角線が等しい時の答えを見つけたフラグ
		bool flag = false;

		// tate
		for (int t = 1; t < 150; t++)
		{
			// wide
			for (int y = 1; y < 150; y++)
			{
#ifdef D
				if (t == 1 && y == 8)
				{
					cout << "when t == 1 && y == 8" << endl;
					cout << "t:" << t << endl;
					cout << "y:" << y << endl;
					cout << y*y + t*t << endl;
				}
#endif
				// height < wide より
				if (t < y)
				{
					// 対角線
					int tai = y * y + t * t;
					// rec より大きいが，max よりは小さい時
					if (rec < tai && tai < max)
					{
#ifdef D
						cout << "t:" << t << endl;
						cout << "y:" << y << endl;
						cout << "rec:" << rec << endl;
						cout << "tai:" << tai << endl;
						cout << "max:" << max << endl;
#endif
						max = tai;
						ans_h = t;
						ans_w = y;
					}
					// rec と等しい時
					else if (rec == tai)
					{
						// 対角線が等しい時は，h < t が必要
						if (h < t)
						{
#ifdef D
							cout << "t:" << t << endl;
							cout << "y:" << y << endl;
							cout << "rec:" << rec << endl;
							cout << "tai:" << tai << endl;
							cout << "max:" << max << endl;
#endif
							max = tai;
							ans_h = t;
							ans_w = y;
							flag = true;
						}
					}
				}
			}
			if (flag)
				break;
		}
		cout << ans_h << " " << ans_w << endl;
	}
	return 0;
}


