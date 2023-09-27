#include <iostream>
#include <vector>
using namespace std;

int main(){
	long n;
	cin >> n;
	vector<long> T(n + 1);
	for (long i = 1; i <= n; i++) cin >> T[i];
	for (long i = 1; i <= n; i++){
		cout << "node " << i << ": ";
		cout << "key = " << T[i] << ", ";
		if (i != 1){
			long parent = i / 2;
			cout << "parent key = " << T[parent] << ", ";
		}
		if (2 * i <= n) cout << "left key = " << T[2 * i] << ", ";
		if (2 * i + 1 <= n) cout << "right key = " << T[2 * i + 1] << ", ";
		cout << endl;
	}
	return 0;
}