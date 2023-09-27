#include<iostream>
#include<algorithm>
using namespace std;
const int MAX_Y = 10000;
const int MAX_X = 10;
int a[MAX_X][MAX_Y] = {0};
int n, m;

void solve(){
	while(cin >> n >> m && n && m){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		int d = 0, r = 0;
		// 1 << n &#31181;情况 
		for(int i = 0; i < (1 << n - 1); i++){
			//&#27599;&#31181;情况&#32479;&#35745;&#27599;一列&#35813;不&#35813;反面 
			int s = 0;
			for(int j = 0; j < m; j++){
				int c = 0;
				for(int k = 0; k < n; k++){
					d = (i >> k) & 1;
					c += a[k][j] ^ d;
				}
				s += max(c, n - c);
			}
			r = max(r, s);
		}
		cout << r << endl;
	}
}
int main(){
	solve();
}