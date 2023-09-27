#include<iostream>
using namespace std;
int main(){
	int cards[10][15];
	for (int j = 0; j < 15; j++){
		for (int i = 0; i < 10; i++){
				cards[i][j] = 0;
			}
		}
	int n;
	cin >> n;
	for (int h = 0; h < n; h++){
		int b, f, r, v;
		cin >> b >> f >> r >> v;
		if (b == 1){
			cards[r - 1][f - 1] +=v ;
		}
		if (b == 2){
			cards[r - 1][f + 3] += v;
		}
		if (b == 3){
			cards[r - 1][f + 7] += v;
		}
		if (b == 4){
			cards[r - 1][f + 11] += v;
		}
	}
	for (int j = 0; j < 15; j++){
		for (int i = 0; i < 10; i++){
			if ((j + 1) % 4 == 0 && j >= -1){
				cout << "#" << "#";
			}
			else{ cout << ' ' << cards[i][j]; }
		}
		cout << endl;
	}
	return 0;
}
