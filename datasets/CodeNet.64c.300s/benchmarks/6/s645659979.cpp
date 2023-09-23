#include <iostream>
using namespace std;

int main(){
	int residents[4][3][10] = {0};
	int n, building, floor, room, value;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> building >> floor >> room >> value;
		residents[building - 1][floor - 1][room -1] += value;
	}
	for(int b = 0; b < 4; ++b) {
		for(int f = 0; f < 3; ++f) {
			for(int r = 0; r < 10; ++r) {
				cout << " " << residents[b][f][r];
			}
			cout << endl;
		}
		
		if(b != 3) {
			for(int i = 0; i < 20; ++i) {
				cout << "#";
			}
			cout << endl;
		}
	}
	return 0;
}