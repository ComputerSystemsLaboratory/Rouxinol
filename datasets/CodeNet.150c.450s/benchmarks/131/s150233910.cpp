#include<iostream>
#include<vector>

using namespace std;

int main(){
	int a, L;

	// ループ
	cin >> a >> L;
	while((a > 0) || (L > 0)){
		vector <int> an;
		int *p;
		bool flag = false;

		// メモリ領域の確保
		p = new int[L];

		// 正しく確保できたかチェック
		if(p == NULL){
			cerr << "メモリ領域の確保に失敗しました" << endl;
			return -1;
		}

		// 入力を数列に追加
		an.push_back(a);

		// 数列を帰納的に求める
		while(!flag){
			int sum = 0, j = 10, max = 0, min = 0;
			int i;
			bool isEnd;

			// 分割処理
			for(i=0;i<L;i++){
				p[i] = (a % j) - sum;
				sum += p[i];
				p[i] /= (j / 10);
				j *= 10;
			}

			// ソート
			do{
				isEnd = true;
				for(i=0;i<L-1;i++){
					if(p[i] < p[i+1]){
						p[i] -= p[i+1];
						p[i+1] += p[i];
						p[i] = p[i+1] - p[i];
						isEnd = false;
					}
				}
			}while(!isEnd);

			// 最大値を求める
			for(i=0;i<L;i++){
				max *= 10;
				max += p[i];
			}

			// 最小値を求める
			for(i=0;i<L;i++){
				min *= 10;
				min += p[L-i-1];
			}

			// 差を計算し、数列を検索
			for(i=0;i<(int)an.size();i++){
				if(an[i] == (max - min)){
					flag = true;
					cout << i << " " << an[i] << " " << ((int)an.size() - i) << endl;
				}
			}
			// まだ続けるなら
			if(!flag){
				// 数列に追加
				an.push_back(max - min);
				a = max - min;
			}
		}

		// メモリ領域の解放
		delete [] p;

		// 入力
		cin >> a >> L;
	}

	return 0;
}