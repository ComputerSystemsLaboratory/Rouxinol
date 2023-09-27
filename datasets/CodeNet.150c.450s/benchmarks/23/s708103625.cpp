#include <iostream>

using namespace std;

int main(){
	int n;
	long f[45];
	f[0] = f[1] = 1;
	cin >> n;
	for (int i = 2; i <= n; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
	cout << f[n] << endl;;
	return 0;
}