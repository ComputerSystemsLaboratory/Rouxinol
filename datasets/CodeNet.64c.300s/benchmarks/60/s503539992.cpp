#include<iostream>
#include<cstdio>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
using namespace std;
long long sousuu = 1, ans;

int main()
{


	while (1) {
		int machi[20][20] = { 0,0 }, a, b, n;
		cin >> a >> b; if (a == 0 && b == 0) { break; }cin >> n; a--; b--;
		//if (n == 0) { break; }//cout << n << endl;
		bool kouji[20][20] = { false };
		for (int i = 0; i < n; i++)
		{
			int d, e; cin >> d >> e;
			kouji[d - 1][e - 1] = true;
		}
		machi[0][0] = 1;
		REP(i, a + 1) {
			if (kouji[i][0] == false) {
				machi[i][0] = 1;
			}
			else {
				//			cout << i<<"a";
				break;
			}
		}

		REP(i, b + 1) {
			if (kouji[0][i] == false) {
				machi[0][i] = 1;
			}
			else { break; }
		}
		FOR(i, 1, a + 1) {
			FOR(j, 1, b + 1) {
				if (kouji[i][j] != true) {
					machi[i][j] = machi[i - 1][j] + machi[i][j - 1];
				//	cout << i << " " << j << " " << machi[i][j] << endl;
				}
			}
		}
		cout << machi[a][b] << endl;
	}

	//	cout << "s";
	return 0;
}