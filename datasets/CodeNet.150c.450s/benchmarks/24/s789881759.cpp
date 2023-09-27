/*
問題の名称：Princess'sMarriage
問題のURL:http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=3534922#3
所要時間：30分
学んだこと：pairの宣言、ソートなど
*/
#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
	int N,M;

	//DとPのペアDPの宣言
	pair<int,int> DP[10000];
	while ((cin >> N >> M) && (N > 0))
	{
		for (int i = 0; i < N; ++i)
		{
			cin >> DP[i].first >> DP[i].second;

			//Pの大きさでソートしたいのでPをfirstに
			swap(DP[i].first,DP[i].second);
		}

		//降順にソート
		sort(DP,DP+N);
		reverse(DP,DP+N);

		int ans = 0;

		for (int i = 0; i < N; ++i) //Pの大きいところから護衛を雇う
		{
			if (M >= DP[i].second) //お金が十分にあるときは護衛を次の宿場まで雇える
			{
				M -= DP[i].second;
			}
			else if (M > 0) //中途半端な時は所持金の限り雇う 残りは期待値を加算
			{
				ans += DP[i].first * (DP[i].second - M); 
				M = 0;
			}
			else //お金がないときはそのまま期待値を加算
			{
				ans += DP[i].first * DP[i].second;
			}
		}

		cout << ans << endl;
	}
	return 0;
}
