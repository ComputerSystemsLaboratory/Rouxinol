#include <iostream>

using namespace std;

int senbei[10][100000];

int main(){
	while(true){
		int r, c;
		cin >> r >> c;
		if(r == 0 && c == 0){ break; }
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				cin >> senbei[i][j];
			}
		}
		int answer = 0;
		for(int i = (1 << r) - 1; i >= 0; i--){
			int sum = 0;
			for(int j = 0; j < c; j++){
				int count = 0;
				for(int k = 0; k < r; k++){
					if(senbei[k][j] ^ ((i >> k) & 0x01)){ count++; }
				}
				sum += max(count, r - count);
			}
			answer = max(answer, sum);
		}
		cout << answer << endl;
	}
	return 0;
}