#include <iostream>
#include <vector>

/*動的計画法で解く*/
int main(){
	//並んでいる数字の個数を表す整数Nを入力
	int n;
	std::cin >> n;
	//二次元のベクタ用意 dp[i][j]はi - 1 項まで計算した結果がjである数
	std::vector<std::vector<long long int> > dp(n, std::vector<long long int>(21, 0));
	//入力数値保存用
	std::vector<int> num(n, 0);
	//数値入力
	for(int i = 0; i < n; ++i){
		int x;
		std::cin >> x;
		num[i] = x;
	}
	//初期値（一番左の数）
	dp[0][num[0]] = 1;
	//処理
	for(int i = 1; i < n - 1; ++i){ //2項からN - 1項までの計算
		for(int j = 0; j < 21; ++j){
			//もし1つ前の計算結果がjの場合の数があればその加減を求める
			if(dp[i - 1][j] > 0){
				//それがもし0以上20以下なら
				if((j + num[i]) >= 0 && (j + num[i]) <= 20){
					//和
					dp[i][j + num[i]] += dp[i - 1][j];
				}
				if((j - num[i]) >= 0 && (j - num[i]) <= 20){
					//差
					dp[i][j - num[i]] += dp[i - 1][j];
				}
			}
		}
	}
	//必要な結果はn - 1項まで計算した結果がnum[n-1]である数　つまりdp[n-2][num[n-1]]
	std::cout << dp[n - 2][num[n - 1]] << std::endl;
	return 0;
}