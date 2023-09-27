#include <iostream>

using namespace std;

int main(void)
{
	int x, y, s;
	while(cin >> x >> y >> s, x > 0){
		int maxi = 0;
		for(int p1 = 1, p2 = s-p1; p1 <= s-1; p1++, p2--){
			int p1_before, p2_before;
			int p1_after, p2_after;
			//税抜き価格の計算
			p1_before = (p1*100+(100+x-1))/(100+x);
			p2_before = (p2*100+(100+x-1))/(100+x);
			if (p1_before*(100+x)/100 + p2_before*(100+x)/100 != s)
				continue;
			//変更後税込価格の計算
			p1_after = p1_before*(100+y)/100;
			p2_after = p2_before*(100+y)/100;
			//最大値チェック
			maxi = max(maxi, p1_after+p2_after);
		}
		cout << maxi << endl;
	}
	return 0;
}
