#include <iostream>
#define INF 1000000
using namespace std;

int q;
string x,y;
int _dp[1010][1010];
int result[150];

int dp(int posx,int posy){
	if(_dp[posx][posy]) return _dp[posx][posy];
	if(posx == 0 || posy == 0){
		_dp[posx][posy] == 0;
		return 0;
	}else{
		int max = dp(posx-1,posy);
		if(max < dp(posx,posy-1)) max = dp(posx, posy-1);
		if(x[posx-1] == y[posy-1] && max < dp(posx-1,posy-1)+1)
			max = dp(posx-1,posy-1)+1;
		_dp[posx][posy] = max;
		return max;
	}
}

int main(void){
	cin >> q;
	
	for(int i=0; i<q; i++){
		cin >> x >> y;
		result[i] = dp(x.size() ,y.size());
		std::fill((int*) _dp, (int*) (_dp + 1010), 0);
	}
	
	for(int i=0; i<q; i++) cout << result[i] << endl;
	
	return 0;
}
