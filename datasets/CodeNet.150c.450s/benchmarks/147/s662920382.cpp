#include<iostream>
using namespace std;
//エイシングプロコン2020
//C問題
int main(){
	int n;
	cin >> n;
	int ans[10050] = { 0 };
	int v;
	for (int i = 1; i <= 105; i++){
		for (int j = 1; j<= 105;j++){
			for (int k = 1; k<= 105; k++){
				v = i*i + j*j + k*k + i*j + j*k + k*i;
				if (v<10050){
					ans[v] += 1;
				}
			}
		}
	}
	for (int i = 1; i <= n; i++){
		cout << ans[i] << endl;
	}
	return 0;
}