#include<iostream>
#include<algorithm>
#define INF 1145141919
using namespace std;

int r, c, mn;
bool senbei[10][10000];

void judge(int d, bool how[], bool howmn[])
{
	if (d < r){
		how[d] = false;
		judge(d + 1, how, howmn);
		how[d] = true;
		judge(d + 1, how, howmn);
		return;
	}
	int sum = 0;
	for (int j = 0; j < c; j++){
		int f = 0, t = 0;
		for (int i = 0; i < r; i++){
			if (senbei[i][j]^how[i]) t++;
			else f++;
		}
		sum += min(t, f);
	}
	if (mn > sum){
	mn = sum;
		for (int i = 0; i < r; i++){
			howmn[i] = how[i];
		}
	}
}

int main()
{
	while (true){
		cin >> r >> c;
		if (!r&&!c) break;
		for (int i = 0; i < r; i++){
			for (int j = 0; j < c; j++){
				cin >> senbei[i][j];
			}
		}

		//s1
		mn = INF;
		bool how[10], howmn[10];
		judge(0, how, howmn);

		for (int i = 0; i < r; i++){
			if (howmn[i]){
				for (int j = 0; j < c; j++){
					senbei[i][j] = senbei[i][j] ? false : true;
				}
			}
		}

		//s2
		int ans = 0;
		for (int j = 0; j < c; j++){
			int t = 0, f = 0;
			for (int i = 0; i < r; i++){
				if (senbei[i][j]) t++;
				else f++;
			}
			ans += max(t, f);
		}

		cout << ans << endl;
	}
	return 0;
}