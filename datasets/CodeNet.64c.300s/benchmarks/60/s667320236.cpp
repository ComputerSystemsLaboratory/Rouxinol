#include <bits/stdc++.h>

using namespace std;

int a,b,n,x,y;
int area[17][17];
bool stop[17][17];

void dp(int a, int b){
	for(int i = 1;i <= b; i++){
		for(int j = 1;j <= a;j++){
			if(i == 1 && j == 1)continue;
			if(stop[j][i] == 1)continue;
			area[j][i] = area[j - 1][i] + area[j][i - 1];
		}
	}
	return;
}

int main(){
	while(cin >> a >> b,a){
		fill_n(*area,17*17,0);
		fill_n(*stop,17*17,0);
		area[1][1] = 1;
		cin >> n;
		for(int i = 0;i < n;i++){
			cin >> x >> y;
			stop[x][y] = 1;
		}
		dp(a,b);
		cout << area[a][b] << endl;
	}

}