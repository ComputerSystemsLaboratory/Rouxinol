#include<iostream>

#define     MAX_N_NUMBER     200

using namespace std;

int main(){
	int *pointx, *pointy;
	int n, ni, d, i;

	// ループ
	cin >> n;
	while(n > 0){
		int ue = 0, shita = 0, migi = 0, hidari = 0;
		// メモリの確保
		pointx = new int[n];
		pointy = new int[n];
		// メモリ領域が正常に確保されたかチェック
		if((pointx == NULL) || (pointy == NULL)){
			cerr << "メモリ確保エラー" << endl;
			return -1;
		}
		// 初期化
		pointx[0] = 0;
		pointy[0] = 0;
		// ループ
		for(i=1;i<n;i++){
			// ni と d の入力
			cin >> ni >> d;
			// チェック
			if((ni < 0) || (ni >= n)){
				cerr << "指定された正方形は存在しません" << endl;
				i--;
				continue;
			}else if((d < 0) || (d > 3)){
				cerr << "方向の指定が間違っています" << endl;
				i--;
				continue;
			}
			// 座標の代入・端の計算
			switch(d){
				case 0:
					// 座標の代入
					pointx[i] = pointx[ni] - 1;
					pointy[i] = pointy[ni];
					// 左端かどうかをチェック
					if(pointx[i] < hidari){
						// 左端を更新
						hidari = pointx[i];
					}
					break;
				case 1:
					// 座標の代入
					pointx[i] = pointx[ni];
					pointy[i] = pointy[ni] - 1;
					// 下端かどうかをチェック
					if(pointy[i] < shita){
						// 下端を更新
						shita = pointy[i];
					}
					break;
				case 2:
					// 座標の代入
					pointx[i] = pointx[ni] + 1;
					pointy[i] = pointy[ni];
					// 右端かどうかをチェック
					if(pointx[i] > migi){
						// 右端を更新
						migi = pointx[i];
					}
					break;
				case 3:
					// 座標の代入
					pointx[i] = pointx[ni];
					pointy[i] = pointy[ni] + 1;
					// 上端かどうかをチェック
					if(pointy[i] > ue){
						// 上端を更新
						ue = pointy[i];
					}
					break;
			}
		}
		// 結果の表示
		cout << (migi - hidari + 1) << " " << (ue - shita +1) << endl;
		// メモリの解放
		delete [] pointx;
		delete [] pointy;
		// n の入力
		cin >> n;
	}


	return 0;
}