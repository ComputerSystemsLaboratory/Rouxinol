#include<iostream>
using namespace std;
int main(){
	int a, b;
	while (cin >> a >> b){
		if (a == 0 && b == 0)return 0;
		int n;
		cin >> n;
		bool b0[20][20] = { false };
		int t[20][20];
		for (int i = 0; i < n; i++){
			int q, w; cin >> q >> w;
			b0[q][w] = true;
		}
		for (int i = 0; i < a + 1; i++){
			for (int j = 0; j < b + 1; j++) {
				if (i == 0 || j == 0)t[i][j] = 0;
				else if (b0[i][j])t[i][j] = 0;
				else if (i == 1 && j == 1)t[i][j] = 1;
				else t[i][j] = t[i - 1][j] + t[i][j - 1];
			}
		}
		cout << t[a][b] << endl;
	}
}