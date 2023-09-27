#include <iostream>
#include <vector>
#include <string>
using namespace std;

enum COO{X, Y};

int main(){
	vector<bool> ansvec;

	for(;;){
		int N;
		cin >> N;
		if (N == 0) break;
		
		bool isGem[21][21] {{false}};
		for (int i = 0; i < N; i++){
			int x, y;
			cin >> x >> y;
			isGem[x][y] = true;
		}
		
		int M;
		cin >> M;
		int collect = 0;
		int now[2] = {10, 10}; // (x, y)
		for (int i = 0; i < M; i++){
			string d;
			int l;
			cin >> d >> l;
			for (int j = 1; j <= l; j++){
				if (d == "N" && isGem[now[X]][now[Y] + j]){
					collect++;
					isGem[now[X]][now[Y] + j] = false;
				}
				else if (d == "E" && isGem[now[X] + j][now[Y]]){
					collect++;
					isGem[now[X] + j][now[Y]] = false;
				}
				else if (d == "S" && isGem[now[X]][now[Y] - j]){
					collect++;
					isGem[now[X]][now[Y] - j] = false;
				}
				else if (d == "W" && isGem[now[X] - j][now[Y]]){
					collect++;
					isGem[now[X] - j][now[Y]] = false;
				}
			}

			now[X] += (d == "E" ? l : d == "W" ? -l : 0);
			now[Y] += (d == "N" ? l : d == "S" ? -l : 0);
		}
		ansvec.push_back(collect == N);
	}

	for (bool ans : ansvec){
		cout << ( ans == true ? "Yes" : "No" ) << endl;
	}
	return 0;
}