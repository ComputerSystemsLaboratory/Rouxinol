#include <iostream>
#include <vector>
using namespace std;
#define C

#ifdef C
#define BIL 4
#define FLO	3
#define ROO	10
int main(void)
{
	unsigned char rooms[BIL][FLO][ROO] = {};
	int num;
	cin >> num;
	for (size_t i = 0; i < num; i++)
	{
		int b, f, r, v;
		cin >> b >> f >> r >> v;
		rooms[b - 1][f - 1][r - 1] += v;
	}
	for (size_t i = 0; i < BIL; i++)
	{
		if (i!=0)
		{
			for (size_t j = 0; j < ROO; j++)
			{
				cout << "##";
			}
			cout << endl;
		}
		for (size_t j = 0; j < FLO; j++)
		{
			for (size_t k = 0; k < ROO; k++)
			{

				cout << " "<< static_cast<int>(rooms[i][j][k]);
			}
			cout << endl;
		}

	}
		return 0;
}
#endif // !C