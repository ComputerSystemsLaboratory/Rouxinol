#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int VLineNum, HLineNum;
	cin >> VLineNum;
	cin >> HLineNum;

	int* Data = new int[VLineNum];//あみだくじNo.配列初期化
	for (int i = 0; i < VLineNum; ++i){
		Data[i] = i + 1;
	}

	int a, b, temp;//データロード&あみだくじ数値反転
	for (int i = 0; i < HLineNum; ++i){
		scanf("%d,%d", &a, &b);
		temp = Data[b-1];
		Data[b-1] = Data[a-1];
		Data[a-1] = temp;
	}

	for (int i = 0; i < VLineNum; ++i){//出力
		cout << Data[i] << endl;
	}

	delete [] Data;

	return 0;
}