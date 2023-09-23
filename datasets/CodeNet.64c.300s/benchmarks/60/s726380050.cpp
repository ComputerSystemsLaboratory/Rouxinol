#include <cstdio>
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long int tkkw; 

tkkw dp[16][16];
	
tkkw kuwa(int x, int y){
	if(x <0  || y<0) return 0;
	if (dp[x][y] !=-1) return dp[x][y];

	return (kuwa(x-1,y) + kuwa(x,y-1));
}
int main(){
	while(1){
	for(int i=0;i<16;i++){
		for(int j=0;j<16;j++){
			dp[i][j] =-1;
		}
	}
	int a,b,n;
	cin >> a>>b;
	if(a==0 && b==0)break;
	cin >> n;
	dp[0][0] = 1;
	for(int i=0; i<n ; i++ ){
		int l,m;
		cin >> l>>m;
		dp[l-1][m-1] = 0;
	}
	cout << kuwa(a-1,b-1) <<endl;
}

	return 0;
}