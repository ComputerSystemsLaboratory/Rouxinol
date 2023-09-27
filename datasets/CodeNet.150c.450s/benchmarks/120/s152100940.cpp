#include <iostream>

using namespace std;

int main(){
	int R, C;
	static int s[10][10000];
	while(cin >> R >> C){
		if(R == 0 && C == 0) break;
		for(int i=0;i<R;i++){
			for(int j=0;j<C;j++) cin >> s[i][j];
		}
		int res = 0;
		for(int b=0;b<(1<<R);b++){
			int sum = 0;
			for(int j=0;j<C;j++){
				int cnt = 0;
				for(int i=0;i<R;i++){
					if(b&(1<<i)){
						if(s[i][j] == 1) cnt++;
					} else {
						if(s[i][j] == 0) cnt++;
					}
				}
				sum += max(cnt, R-cnt);
			}
			res = max(sum, res);
		}
		cout << res << endl;
	}
}