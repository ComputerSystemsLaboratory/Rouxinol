#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, r;
	while(cin >> n >> r, n > 0){
		vector<int> card(n);
		//カード番号初期化
		for(int i=0;i<n;i++){
			card[i] = n-i;
		}
		//シャッフル処理
		for(int i=0;i<r;i++){
			int p, c;
			cin >> p >> c;
			rotate(card.begin(), card.begin()+p-1, card.begin()+p+c-1);
		}
		cout << card[0] << endl;
	}
	return 0;
}
