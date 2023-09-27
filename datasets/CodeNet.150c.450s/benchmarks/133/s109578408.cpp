#include<iostream>
using namespace std;
int main()
{
	int D;//日数
	uint32_t c[26+1];// 満足度低下係数
	uint32_t s[365+1][26+1]; //d日目にコンテストタイプiを実施したときの満足度増加幅
	uint32_t t[365+1]; //D日目にどのコンテストタイプを実施するか
	
	// 入力
	cin >> D;
	for(int i = 1; i <= 26; ++i) {
		cin >> c[i];
	}
	for(int i = 1; i <= D; ++i) {
		for(int j = 1; j <= 26; ++j) {
			cin >> s[i][j];
		}
	}
	for(int i = 1; i <= D; ++i) {
		cin >> t[i];
	}
	
	//計算
	int last[26+1];
	int32_t v = 0; //満足度
	for(int d = 1; d <= D; ++d) {
		int type = t[d];
		last[type] = d;
		
		//増加
		v += s[d][ type ];
		
		//減少
		for(int i = 1; i <= 26; ++i) {
			v -= c[i] * (d - last[i]);
		}
		
		cout << v << endl;
	}

	return 0;
}

