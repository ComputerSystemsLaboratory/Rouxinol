#include<bits/stdc++.h>
using namespace std;
#define INF 1 << 30
#define N 101
int main(void){
	int n,m[N][N],tmp[N];
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		cin >> tmp[i-1] >> tmp[i];
	}
	for(int i = 1 ; i <= n ; i++){
		m[i][i] = 0;
	}
	for(int j = 2; j<= n ; j++){
		for(int i = 1; i <= n- j + 1; i++){
			int k = i + j -1;
			m[i][k] = INF;
			for(int l = i; l <= k - 1 ; l++){
				m[i][k] = min(m[i][k],m[i][l] + m[l+1][k]+tmp[i-1] * tmp[l] * tmp[k]);
			}
		}
	}

	cout << m[1][n] << endl;

}