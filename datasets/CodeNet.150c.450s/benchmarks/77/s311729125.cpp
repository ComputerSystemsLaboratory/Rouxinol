#include <iostream>

using namespace std;

int main(){
	int N, x, y, M, distance[30], placex, placey;
	char move[30];
	while(1){
		cin >> N;
		if(N == 0) break;

		int field[25][25] = {{0}};
		int placex = 10, placey = 10, count = 0;

		for(int i = 1;i <= N;i++){
			cin >> x >> y;
			field[x][y] = 1;
		}

		cin >> M;
		for(int i = 0;i < M;i++){
			cin >> move[i] >> distance[i];
		}

		for(int i = 0;i < M;i++){
			if(move[i] == 'N'){
				for(int j = 0;j < distance[i];j++){
					placey++;
					if(field[placex][placey] == 1){
						count++;
						field[placex][placey] = 0;
					}
				}
			} else if (move[i] == 'E'){
				for(int j = 0;j < distance[i];j++){
					placex++;
					if(field[placex][placey] == 1){
						count++;
						field[placex][placey] = 0;
					}
				}
			} else if (move[i] == 'W'){
				for(int j = 0;j < distance[i];j++){
					placex--;
					if(field[placex][placey] == 1){
						count++;
						field[placex][placey] = 0;
					}
				}
			} else {
				for(int j = 0;j < distance[i];j++){
					placey--;
					if(field[placex][placey] == 1){
						count++;
						field[placex][placey] = 0;
					}
				}
			}
		}
		if(count == N){
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}

	return 0;
}