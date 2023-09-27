#include<iostream>
#include<algorithm>
using namespace std;
int c[101][10001];
int main(){
	int N, W;
	cin >> N >> W;
	int v_[1000]; int w_[1000];
	for (int i = 1; i <= N; i++){
		cin >> v_[i] >> w_[i];
	}
	//cout << "a" << endl;
	int max_ = -1;
	for (int i = 0; i < W; i++) c[0][i] = 0;
	for (int i = 0; i < N; i++) c[i][0] = 0;
	//cout << "v" << endl;
	for (int i = 1; i <= N; i++){
		for (int j = 1; j <= W; j++){
			if (0 <= j - w_[i]){
				c[i][j] = max(c[i - 1][j], c[i - 1][j - w_[i]] + v_[i]);
			}
			else c[i][j] = c[i - 1][j];
			max_ = max(max_, c[i][j]);
			//cout << c[i][j] << "  ";
		}//cout << endl;
	}
	cout << max_ << endl;
	return 0;
}