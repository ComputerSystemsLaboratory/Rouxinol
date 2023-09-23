#include <iostream>
using namespace std;

int main() {
	int n;
	bool card[52];
	cin >> n;
	for(int i = 0; i < 52; i++) card[i] = 0;
	for(int i = 0; i < n; i++){
		char c;
		int a;
		cin >> c >> a;
		if(c == 'S') card[a-1] = 1;
		else if(c == 'H') card[13+a-1] = 1;
		else if(c == 'C') card[26+a-1] = 1;
		else card[39+a-1] = 1;
	}
	for(int i = 0; i < 52; i++){
		if(!card[i]){
			if(i / 13 == 0) cout << "S " << i%13+1 << endl;
			else if(i / 13 == 1) cout << "H " << i%13+1 << endl;
			else if(i / 13 == 2) cout << "C " << i%13+1 << endl;
			else cout << "D " << i%13+1 << endl;
		}
	}
	return 0;
}
