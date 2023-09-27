#include<iostream>
#include<algorithm>
using namespace std;
const int MAX = 100;
struct exCard
{
	int card1;
	int card2;
	int sum;
};
int main()
{
	while (true)
	{
		int n, m;
		cin >> n >> m;
		if (!n && !m)
			break;
		int T[MAX], H[MAX];
		int sumT = 0;
		int sumH = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> T[i];
			sumT += T[i];
		}
		for (int i = 0; i < m; i++)
		{
			cin >> H[i];
			sumH += H[i];
		}
		bool flag = false;
		exCard C{ -1,-1,999999999 };
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				if (sumT - T[i] + H[j] == sumH - H[j] + T[i])
				{
					flag = true;
					if (T[i] + H[j] < C.sum)
					{
						C.card1 = T[i];
						C.card2 = H[j];
						C.sum = T[i] + H[j];
					}
				}
		}
		if (!flag)
			cout << -1 << endl;
		else
			cout << C.card1 << " " << C.card2 << endl;
	}
}
