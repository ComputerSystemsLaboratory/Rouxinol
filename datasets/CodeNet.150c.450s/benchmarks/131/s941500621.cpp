#include <iostream>
#include <map>
#include <algorithm>
#include <functional>
#include <cstring>
#include <cstdlib>

#define MEMZERO(x, sz) memset(x, '0', sz);

using namespace std;

int keta;

void mycopy( char a[7], int x )	// 数字を文字列に
{
	MEMZERO(a, 7);
	a[keta] = 0;
	int pnt = 0;
	while(x) {
		a[pnt++] = (x % 10) + '0';
		x /= 10;
	}
}
int main( void )
{
	int num;
	int save[21];
	while(cin >> num >> keta, num | keta) {
		char in[7];
		mycopy(in, num);
		save[0] = num;

		//cout << save[0] << endl;

		int count = 1, ans1, ans2, ans3;
		while(true) {
			char tt[7];
			strcpy(tt, in);
			tt[keta] = 0;
			sort(in, in+keta, greater<char>());	// 最大値
			sort(tt, tt+keta);					// 最小値
			int x = atoi(in) - atoi(tt);			// 大 - 小
			//cout << in << ' ' << tt << endl;
			//cout << x << endl;
			bool hit = false;
			for(int i=0; i < count; ++i) {
				if(x == save[i]) {
					//cout << x << ' ' << save[i] << endl;
					ans1 = i;
					ans2 = x;
					ans3 = count - i;
					hit = true;
					break;
				}
			}
			if(hit) break;
			save[count++] = x;
			mycopy(in, x);
		}
		cout << ans1 << ' ' << ans2 << ' ' << ans3 << endl;
		MEMZERO(in, 7);
		in[keta] = 0;
	}
	return 0;
}