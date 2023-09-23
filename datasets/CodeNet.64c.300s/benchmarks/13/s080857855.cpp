//フィボナッチ数列
#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	if (n < 2){
		cout << 1 << endl;
		return 0;
	}
	int* fibnum = new int [n];
	fibnum[0] = 1; fibnum[1] = 1;
	for (int i = 2; i <= n; ++i){
		fibnum[i] = fibnum[i - 1] + fibnum[i - 2];
	}
	cout << fibnum[n] << endl;

	return 0;
}