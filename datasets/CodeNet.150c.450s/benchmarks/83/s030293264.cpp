#include <iostream>
using namespace std;

int main(){
	int N,W,n,w,res = 0;
	cin >> n >> w;
	int t[n+1][w+1];
	for(int i = 0;i <= n;i++){
		for(int j = 0;j <= w;j++){
				t[i][j] = 0;
		}
	}
	for(int i = 1;i <= n;i++){
			cin >> N >> W;
		for(int j = 1;j <= w;j++){
			if(j - W < 0){
				t[i][j] = t[i-1][j];
				continue;
			}
			t[i][j] = max(t[i-1][j-W]+N,t[i-1][j]);
			res = max(res,t[i][j]);
			//cout <<t[i][j] << " ";
		}
		//cout <<endl;
	}
	cout << res <<endl;
	return 0;
}