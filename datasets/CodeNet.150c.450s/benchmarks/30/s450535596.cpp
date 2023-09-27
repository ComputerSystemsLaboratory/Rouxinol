#include <iostream>
#include <string>
#include <cmath>
#include<iomanip>
#include<algorithm>
#include<list>
using namespace std;


int main()
{
	int n, a[101], count = 0;

	//入力
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	//選択ソート
	for (int i = 0; i < n; i++){
		int minj = i;
		for (int j = i; j < n; j++){
			if (a[j] < a[minj]){
				minj = j;
			}
		}
			int tmp = a[i];
			a[i] = a[minj];
			a[minj] = tmp;
			if (i != minj){
				count++;
			}
	}



	//出力
	for (int i = 0; i < n; i++){
		if (i < n - 1){
			cout <<a[i] << " ";
		}
		else{
			cout << a[i] << endl;
		}
	}
	cout << count << endl;
	return 0;
}