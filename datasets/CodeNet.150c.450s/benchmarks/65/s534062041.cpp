#include <iostream>
#include <string>
#include <cmath>
#include<iomanip>
#include<algorithm>
#include<list>
using namespace std;


int main()
{
	int n;
	string a[101], b[101];

	//入力
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}

	//バブルソート
	for (int i = 0; i < n; i++){
		for (int j = n - 1; j > i; j--){
			if (a[j][1] < a[j - 1][1]){
				string tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;
			}
		}
	}

	//出力
	for (int i = 0; i < n; i++){
		if (i < n - 1){
			cout << a[i] << " ";
		}
		else{
			cout << a[i] << endl<<"Stable"<<endl;
		}
	}

	//選択ソート
	for (int i = 0; i < n; i++){
		int minj = i;
		for (int j = i; j < n; j++){
			if (b[j][1] < b[minj][1]){
				minj = j;
			}
		}
		string tmp = b[i];
		b[i] = b[minj];
		b[minj] = tmp;
	}



	//出力
	for (int i = 0; i < n; i++){
		if (i < n - 1){
			cout <<b[i] << " ";
		}
		else{
			cout << b[i] << endl;
		}
	}
	//安定かどうかの判定
	bool flag = true;
	for (int i = 0; i < n; i++){
		if (a[i] != b[i]){
			flag = false;
		}
	}
	if (flag){
		cout << "Stable" << endl;
	}
	else{
		cout << "Not stable" << endl;
	}

	return 0;
}