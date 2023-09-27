#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
	int cnt = 0;
	string W, T;

	cin >> W;
	
	for (int i = 0; i < W.size(); i++) {
		W[i] = toupper(W[i]);
	}

	while(1) {
		cin >> T;
		if (T == "END_OF_TEXT")
			break;
		for (int i = 0; i < T.size(); i++) {
			T[i] = toupper(T[i]);
		}
		if (W == T)
			cnt++;
	} 

	cout << cnt << endl;

	return 0;
}