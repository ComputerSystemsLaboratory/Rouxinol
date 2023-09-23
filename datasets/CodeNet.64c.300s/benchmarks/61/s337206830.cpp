#include <iostream>
using namespace std;

int main(){
	int r, c, t, u;
	cin >> r >> c;
	int s[c+1];
	for(int i = 0; i < c+1; i++){
		s[i] = 0;
	}
	for(int i = 0; i < r; i++){
		t = 0;
		for(int j = 0; j < c; j++){
			cin >> u;
			t += u;
			s[j] += u;
			cout << u << " ";
		}
		cout << t << endl;
		s[c] += t;
	}
	for(int i = 0; i < c; i++){
		cout << s[i] << " ";
	}
	cout << s[c] << endl;
	return 0;
}