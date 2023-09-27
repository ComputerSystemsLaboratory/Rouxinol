#include<iostream>

using namespace std;

int main(){
	int S = 0, T = 0, s[4], t[4];

	for(int i = 0; i < 4; i++){
		cin >> s[i];
		S += s[i];
	}
	for(int i = 0; i < 4; i++){
		cin >> t[i];
		T += t[i];
	}

	if(S > T) cout << S << endl;
	else cout << T << endl;

	return 0;
}