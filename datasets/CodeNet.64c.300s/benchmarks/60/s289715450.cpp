#include<iostream>
const int MAX_X = 17;
const int MAX_Y = 17;
typedef std::pair<int, int> p;
int w[MAX_X][MAX_Y];
p c[41];
int main(){
	while (true){
		int a, b, n, b1, b2;
		std::cin >> a >> b;
		if (a == 0 && b == 0)break;
		std::cin >> n;
		for (int i = 0; i<a; i++){
			for (int j = 0; j<b; j++){
				w[i][j] = 0;
			}
		}
		for (int i = 0; i<a; i++){
			w[i][0] = 1;
		}
		for (int i = 0; i<b; i++){
			w[0][i] = 1;
		}
		for (int i = 0; i<n; i++){
			std::cin >> b1 >> b2;
			w[b1 - 1][b2 - 1] = -1;
		}
		bool fag = false;
		for (int i = 0; i<a; i++){
			if (fag)w[i][0] = -1;
			if (w[i][0] == -1)fag = true;
		}
		fag = false;
		for (int i = 0; i<b; i++){
			if (fag)w[0][i] = -1;
			if (w[0][i] == -1)fag = true;
		}
		for (int i = 0; i<a; i++){
			for (int j = 0; j<b; j++){
				if (i && j){
					if (w[i][j] != -1){
						if (w[i][j - 1] != -1){
							w[i][j] += w[i][j - 1];
						}
						if (w[i - 1][j] != -1){
							w[i][j] += w[i - 1][j];
						}
					}
				}
			}
		}
		std::cout << w[a - 1][b - 1] << "\n";
	}
}