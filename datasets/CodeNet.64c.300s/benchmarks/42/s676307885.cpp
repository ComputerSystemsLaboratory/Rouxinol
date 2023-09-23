#include <bits/stdc++.h>
using namespace std;

int X[30], Y[30];
int check[50][50];

int main(){
	int N, M;
	while(cin >> N, N){
		for(int i = 0; i < N; i++){
			cin >> X[i] >> Y[i];
		}
		cin >> M;
		memset(check, 0, sizeof check);
		int x = 10, y = 10;
		for(int i = 0; i < M; i++){
			char c;
			int k;
			cin >> c >> k;
			while(k--){
				if(c =='N') y++;
				if(c =='S') y--;
				if(c =='E') x++;
				if(c =='W') x--;
				check[y][x] = 1;
			}
		}
		int ans = 0;
		for(int i = 0; i < N; i++){
			if(check[Y[i]][X[i]]) ans++;
		}
		if(ans == N) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}