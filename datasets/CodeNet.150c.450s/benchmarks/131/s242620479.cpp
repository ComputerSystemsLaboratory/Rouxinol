/* 解答時間→ 39:09         */
/* 何故か審査を通らない…… */
#include <algorithm>	//sort, binary_search等々
#include <iostream>		//基本入出力
#include <vector>		//STLの花形vector
using namespace std;

int main(){
	int a, L;

	while(1){
		cin >> a >> L;
		if((a == 0) && (L == 0))
			break;
		int a_[21];
		for(int i = 0; i < 21;i++){
			a_[i] = a;
			vector<int> b_;
			for(int k = 0; k < L; k++){
				b_.push_back(a % 10);
				a /= 10;
			}
			int p = 0, q = 0;
			sort(b_.begin(), b_.end());
			for(int k = L - 1; k >= 0; k--){
				p += b_[k];
				if(k != 0)
					p *= 10;
			}
			for(int k = 0; k < L; k++){
				q += b_[k];
				if(k != L - 1)
					q *= 10;
			}
			a = p - q;
			int flg = 0;
			for(int j = i; j >= 0; j--){
				if(a == a_[j]){
					cout << j << " " << a << " " << (i - j + 1) << "\n";
					flg = 1;
					break;
				}
			}
			if(flg == 1)
				break;
		}
	}
	cout << flush;

	return 0;
}