#include<iostream>

using namespace std;

int main(){
	double x1, y1, x2, y2, x3, y3, px, py;
	double det, s, t;

	// 入力の終わりまでループ
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> px >> py){
		// 係数行列の行列式を計算
		det = ((x2 - x1) * (y3 - y1)) - ((x3 - x1) * (y2 - y1));
		// 係数行列の行列式が0でないことを確かめる
		if(det == 0){
			cerr << "行列式の値が0です" << endl;
			return -1;
		}

		// s, t の値を求める
		s = (((y3 - y1) * (px - x1)) + ((x1 - x3) * (py - y1))) / det;
		t = (((y1 - y2) * (px - x1)) + ((x2 - x1) * (py - y1))) / det;

		// 結果の判定・表示
		if((s > 0) && (s < 1) && (t > 0) && (t < 1) && ((s + t) < 1)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	return 0;
}