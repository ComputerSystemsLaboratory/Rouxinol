#include <bits/stdc++.h>

using namespace std;

#define llong long long 
int a, b;
int n;
int ba, bb;
int area[17][17];
bool notgo[17][17];

void solve(){
	area[1][1] = 1;
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= b; j++){
			if(i == 1 && j == 1) continue;
			if(notgo[i][j] == true)continue;
			int left;
			int down;
			if(i - 1 == 0) left = 0;
			else left = area[i - 1][j];
			if(j - 1 == 0) down = 0;
			else down =  area[i][j - 1];

			area[i][j] = left + down;
		}
	}

	return;
}

int main(){
	while(cin >> a >> b, a){
		fill_n(*area, 17 * 17, 0);
		fill_n(*notgo, 17 * 17, false);

		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> ba >> bb;
			notgo[ba][bb] = true;
		}

		solve();
		cout << area[a][b] << endl;
	}

	return 0;
}