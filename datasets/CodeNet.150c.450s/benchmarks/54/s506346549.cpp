#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string W;
	cin >> W;
	string T;
	int num = 0;
	while(true){
		cin >> T;
		if(T == "END_OF_TEXT") break;
		transform(T.begin(), T.end(), T.begin(), ::tolower);
		if(T == W) ++num;
	}
	cout << num << endl;
	return 0;
}