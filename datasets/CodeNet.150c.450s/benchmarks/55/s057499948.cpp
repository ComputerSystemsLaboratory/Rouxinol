#include <iostream>
using namespace std;

int main(){
	string x;
	while (cin >> x, x != "0"){
		int ans = 0;
		int l = x.length();
		for (int i = 0; i < l; ++i){
			ans += x[i] - 48;
		}
		cout << ans << endl;
	}
	return 0;
}