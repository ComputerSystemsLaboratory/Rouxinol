



#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

/*
int main(void)
{
	int n;
	vector<int> vecPrime;

	while (cin >> n)
	{
		// vectorの破棄
		vecPrime.clear();

		// nが2以上の時,2のみ追加
		if (n >= 2)
		{
			vecPrime.push_back(2);
		}

		// 奇数のみ探索
		for (int i = 3; i <= n; i += 2)
		{
			// 割り切れたらtrueにする
			bool flagPrime = false;

			// 奇数しかループさせないため、j = 1からでよい
			int size = vecPrime.size();
			for (int j = 1; j < size && vecPrime[j] < sqrt((double)i); j++)
			{
				// 割り切れたら素数でない
				if (i % vecPrime[j] == 0)
				{
					flagPrime = true;
					break;
				}
			}
			// すべて割り切れなかった場合
			if (flagPrime == false)
			{
				vecPrime.push_back(i);
			}
		}

		cout << vecPrime.size() << endl;
	}

	return 0;
}
*/


#define SIZE 100000

int main(void)
{
	int n;
	int prime[SIZE] = {0};

	while (cin >> n)
	{
		int ans = 0;

		// nが2以上の時,2のみ追加
		if (n >= 2)
		{
			prime[0] = 2;
			ans++;
		}

		// 奇数のみ探索
		for (int i = 3; i <= n; i += 2)
		{
			// 割り切れたらtrueにする
			bool flagPrime = false;

			// 奇数しかループさせないため、j = 1からでよい(sqrtの部分が < ではwrongAnswer)
			for (int j = 1; j < ans && prime[j] <= sqrt((double)i); j++)
			{
				// 割り切れたら素数でない
				if (i % prime[j] == 0)
				{
					flagPrime = true;
					break;
				}
			}
			// すべて割り切れなかった場合
			if (flagPrime == false)
			{
				prime[ans] = i;
				ans++;
			}
		}

		cout << ans << endl;
	}

	return 0;
}