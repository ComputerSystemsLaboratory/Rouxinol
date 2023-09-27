#include <iostream>
//#include <iomanip>
//#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){

	string W,T;
	char buf;
	int ans = 0;
	int pos = 0;

	getline(cin, W);
	transform(W.begin(), W.end(), W.begin(), ::toupper);

	while (cin >> T){
		transform(T.begin(), T.end(), T.begin(), ::toupper);
		if (T == W) ans++;
	}


	cout << ans << endl;

	return 0;
}