#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	while(true){
		int h, w = 5;
		cin >> h;
		if(h == 0){ break; }
		vector<vector<int>> field(h, vector<int>(w));
		for(int i = 0; i < h; ++i){
			for(int j = 0; j < w; ++j){ cin >> field[i][j]; }
		}
		int score = 0;
		while(true){
			bool modified = false;
			for(int i = 0; i < h; ++i){
				for(int j = 0; j < w; ++j){
					if(field[i][j] < 0){ continue; }
					int k = j;
					while(k < w && field[i][j] == field[i][k]){ ++k; }
					if(k - j < 3){ continue; }
					for(--k; k >= j; --k){
						score += field[i][k];
						field[i][k] = -1;
						modified = true;
					}
				}
			}
			if(!modified){ break; }
			for(int j = 0; j < w; ++j){
				int k = h - 1;
				for(int i = h - 1; i >= 0; --i){
					if(field[i][j] >= 0){ field[k--][j] = field[i][j]; }
				}
				for(; k >= 0; --k){ field[k][j] = -1; }
			}
		}
		cout << score << endl;
	}
	return 0;
}