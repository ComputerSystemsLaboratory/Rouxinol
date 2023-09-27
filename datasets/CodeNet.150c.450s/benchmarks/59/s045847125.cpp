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
	int a[101];

	//入力
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	//出力
	for (int j = 0; j < n; j++){
		if (j < n - 1){
			cout << a[j] << " ";
		}
		else{
			cout << a[j] << endl;
		}
	}

	for (int i = 1; i < n; i++){

		//ソート
		for (int j = 0; j < n; j++){
			if (a[j] > a[i]){
				int tmp = a[i];
				for (int k = i - 1; k > j - 1; k--){
					a[k + 1] = a[k];
				}
				if (j < i){
					a[j] = tmp;
				}
				break;
			}
		}

		//出力
		for (int j = 0; j < n; j++){
			if (j < n - 1){
				cout << a[j] << " ";
			}
			else{
				cout << a[j] << endl;
			}
		}
	}

	return 0;
}