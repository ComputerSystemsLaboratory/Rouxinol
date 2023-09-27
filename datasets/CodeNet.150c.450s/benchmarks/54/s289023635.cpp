#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	string W, T;
	long i = 0;
	cin >> W;
	//W = "Hello,";
	transform(W.begin(), W.end(), W.begin(), ::tolower);
	while (cin >> T){
		//T = "Hello, Hello, World.";
		if (T == "END_OF_TEXT") break;
		transform(T.begin(), T.end(), T.begin(), ::tolower);
		if (T == W) i++;
	}
	cout << i << endl;
	return 0;
}