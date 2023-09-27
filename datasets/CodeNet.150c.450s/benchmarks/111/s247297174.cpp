#include <bits/stdc++.h>
using namespace std;

#define llong long long 

int how;
llong int in[101];
llong int score[21][100];

llong int solve(llong int sum, llong int d){
	if(sum < 0 || sum > 20) return 0;
	if(score[sum][d] != -1) return score[sum][d];
	if(d == how - 1){
		if(sum == in[how])return score[sum][d] = 1;
		else return score[sum][d] = 0;	
	}

	llong int ret;
	if(sum == 0 && d == 0){
		ret = solve(in[1], 1);
	}else{
		ret = solve(sum - in[d + 1], d + 1) + solve(sum + in[d + 1], d + 1);
	}

	return score[sum][d] = ret;
}

int main(){
	fill_n(in, 101, -1);
	fill_n(*score, 21 * 100, -1);
	cin >> how;
	for(int i = 1; i <= how; i++){
		cin >> in[i];
	}
	cout << solve(0, 0) << endl;

	return 0;
}