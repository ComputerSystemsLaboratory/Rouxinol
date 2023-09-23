#include <iostream>
using namespace std;

int main()
{
	int n,m;
	while(cin >> n >> m){
		if(!n && !m)
			break;
		int DP[16][16];
		for(int i=0;i<16;i++){
			for(int j=0;j<16;j++){
				DP[i][j] = 1;
			}
		}
		int k;
		cin >> k;
		for(int l=0;l<k;l++){
			int a,b;
			cin >> a >> b;
			DP[b-1][a-1] = 0;
		}
		
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(i == 0 && j == 0)
					continue;
				if(DP[i][j] != 0){
					if(i == 0)
						DP[i][j] = DP[i][j-1];
					else if(j == 0)
						DP[i][j] = DP[i-1][j];
					else
						DP[i][j] = DP[i-1][j] + DP[i][j-1];
				}
			}
		}
		cout << DP[m-1][n-1] << endl;
	}
	return 0;
}