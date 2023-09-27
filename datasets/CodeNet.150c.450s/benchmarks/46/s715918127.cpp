#include <iostream>
#define MAXNUM 200
#define MAXSUM 600
using namespace std;

int dp2[MAXNUM][MAXSUM];
int dp3[MAXNUM][MAXSUM];


int main() {
	int n,m,i,j;
	while(1){
		cin >> n >> m;
		if(n == 0) break;
		for(i=2;i <= n;i++){
			for(j=3;j <= m;j++){
  				dp2[i][j] = dp2[i-1][j];
  				if(j-i > 0 && i-1 >= j-i )dp2[i][j]++;
  				dp3[i][j] = dp3[i-1][j];
				if(j-i > 0) dp3[i][j] += dp2[i-1][j-i];
 			}
		}
		
		cout << dp3[n][m] << endl;
	}
return 0;
}