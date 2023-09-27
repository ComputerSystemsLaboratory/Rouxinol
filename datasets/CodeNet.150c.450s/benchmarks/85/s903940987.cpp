#include<iostream>
using namespace std;
struct mat
{
	int w;
	int h;
};
typedef struct mat mat_t;
long long min(long long a,long long b);

int n;
mat_t a[101];
long long dp[101][101] ;

int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i].h >> a[i].w;
	}
	for(int x = 0;x<n;x++){
		for(int y =0;y<n;y++){
			dp[x][y] = 2000000;
			if(x == y) dp[x][y] = 0;
		}
	}
	int i = 0;
	int j = 1;
	for(int l = 1;l<n;l++){
		i = 0;
		for(j=l;j<n;j++){
			for(int k = i;i <= k && k < j;k++){
				dp[i][j] = min(dp[i][j],dp[i][k] + dp[k+1][j] + a[i].h *a[k].w * a[j].w);
			}
			i++;
		}
	}
	cout << dp[0][n-1] << endl;
}

long long min(long long a,long long b) {
	return a<b? a:b;
}