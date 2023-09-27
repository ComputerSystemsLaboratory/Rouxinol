#include<bits/stdc++.h>
using namespace std;

int c[100][100];
int dx[] = { 0, 1, 1, 1, 0, -1, -1, -1 };
int dy[] = { -1, -1, 0, 1, 1, 1, 0, -1 };

void dfs(int x, int y){
	
	if (c[y][x] != 0){
		c[y][x] = 0;
		for (int i = 0; i < 8; i++){
			dfs(x + dx[i], y + dy[i]);
		}
	}

	return;
}

int main(){

	int w, h;

	while (cin >> w >> h, w, h){

		for (int j = 1; j <= h; j++){
			for (int i = 1; i <= w; i++){
				cin >> c[j][i];
			}
		}

		int result = 0;
		for (int j = 1; j <= h; j++){
			for (int i = 1; i <= w; i++){
				if (c[j][i] != 0) {
					dfs(i, j);
					result++;
				}
			}
		}

		cout << result << endl;

	}

	return 0;
}

//??????????????°??£????????????
//???????????±?????????????????????WA?????????
/*
int main(void){

	int w, h;

	while (cin >> w >> h, w, h){
		int c[100][100] = { 0 };
		vector<bool> island;
		island.push_back(false);

		for (int j = 1; j <= h; j++){
			for (int i = 1; i <= w; i++){
				cin >> c[j][i];
			}
		}

		int count = 1;
		for (int j = 1; j <= h; j++){
			for (int i = 1; i <= w; i++){
				if (c[j][i] != 0){

					if (c[j][i - 1] != 0) c[j][i] = c[j][i - 1];
					else if (c[j - 1][i + 1] != 0) c[j][i] = c[j - 1][i + 1];
					else if (c[j - 1][i] != 0) c[j][i] = c[j - 1][i];
					else if (c[j - 1][i - 1] != 0) c[j][i] = c[j - 1][i - 1];
					else{
						c[j][i] = count;
						count++;
						island.push_back(true);
					}

					bool buff = island[c[j][i]];

					island[c[j][i - 1]] = island[c[j - 1][i + 1]] = island[c[j - 1][i]] = island[c[j - 1][i - 1]] = false;
					island[c[j][i]] = buff && true;

				}
			}
		}

		int result = 0;
		vector<bool>::iterator it;
		for (it = island.begin(); it != island.end(); ++it) 	if (*it == true) result++;
		
		cout << result << endl;

	}

	return 0;
}
*/


/*
for(i=0;i<N;i++){
cin >> X[i];
}


for(i=0;i<N;i++){
for(j=0;j<N;j++){
cin >> X[i][j];
}
}
*/