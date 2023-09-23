#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
	int n;
	int ary[31] = { 1, 1, 2 };

	for (int i = 3; i <= 30; i++){
		ary[i] = ary[i - 1] + ary[i - 2] + ary[i - 3];
	}

	while (cin >> n, n != 0){
		int cnt = 0;
		if (ary[n] % 3650 == 0){
			cout << ary[n] / 3650 << endl;
		}
		else cout << ary[n] / 3650 + 1 << endl;
	}

	return 0;
}