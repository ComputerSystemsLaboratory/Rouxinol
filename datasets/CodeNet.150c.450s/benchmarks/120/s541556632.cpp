#include <bits/stdc++.h>

using namespace std;

int R,C;
int cnt;
int s = 0;
bool sen[11][10001];
bool flg[11];

int fnc(){
	int ret = 0;
	int senc[R+1][C+1];

	for(int i = 1;i <= R;i++){
		for(int j = 1;j <= C;j++){
			senc[i][j] = sen[i][j];
			if(flg[i] == 1){
				if(senc[i][j] == 1){
					senc[i][j] = 0;
				}else if(senc[i][j] == 0){
					senc[i][j] = 1;
				}
			}
		}
	}

	// for(int i = 1;i <= R;i++){
	// 	for(int j = 1;j <= C;j++){
	// 		cout << senc[i][j] <<" ";
	// 	}
	// 	printf("\n");
	// }

	int sum1;
	int sum0;
	int sum;

	for(int i = 1;i <= C;i++){
		sum1 = 0;
		sum0 = 0;
		for(int j = 1;j <= R;j++){
			if(senc[j][i] == 1)sum1++;
			if(senc[j][i] == 0)sum0++;
		}
		sum = max(sum1,sum0);
		//cout << sum << endl;
		ret += sum;
	}
	//cout << ret <<" "<< ++s << endl ;
	return ret;
}

int solve(int d){
	int ret = 0;

	if(d == R)return fnc();

	ret = max(ret,solve(d+1));
	flg[d+1] = 1;
	ret = max(ret,solve(d+1));
	flg[d+1] = 0;
	//cout << ret << endl;
	return ret;
}

int main(){
	while(cin >> R >> C,R){
		fill_n(flg,11,0);
		fill_n(*sen,11*10001,0);

		for(int i = 1;i <= R;i++){
			for(int j = 1;j <= C;j++){
				cin >> sen[i][j];
			}
		}
		cout << solve(0) << endl;
	} 
	return 0;
}