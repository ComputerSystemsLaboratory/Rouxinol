#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;


int main(){
	int n; cin >> n;

	int f1 = 1;
	int f2 = 1;
	int f3 = 0;
	for (int i = 2; i <= n; ++i){
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	if (n == 1){
		cout << 1 << endl;
		return 0;
	}
	if (n == 2){
		cout << 2 << endl;
		return 0;
	}
	cout << f3 << endl;

	return 0;
}