#include <iostream>

using namespace std;

int main(){
	int house[5][4][11]={0};
	int n, b, f, r, v;
	
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		cin >> b >> f >> r >> v;
		house[b][f][r] += v;
	}
	
	for(int i = 1; i < 5; i++){
		for(int j = 1; j < 4; j++){
			for(int k = 1; k <11; k++){
				cout <<  " " << house[i][j][k];
			}
			cout << endl;
		}
		for(int w = 1; w <= 20; w++){
			if(i != 4){
				cout << "#";
				if(w == 20) cout << endl;
			}
		}
	}
	
	return 0;
}