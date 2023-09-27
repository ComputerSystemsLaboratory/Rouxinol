#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	int n, a, b, c;
	int data[10][10];
	
	while (scanf("%d", &n), n){
		int N = 0;
		for (int i = 0; i < 10; i++){
			for (int j = 0; j < 10; j++){
				if (i == j) data[i][j] = 0;
				else data[i][j] = 10000000;
			}
		}
		for (int i = 0; i < n; i++){
			scanf("%d %d %d", &a, &b, &c);
			data[a][b] = data[b][a] = c;
			N = max(N, max(a, b));
		}
		
		// WF
		for (int k = 0; k < 10; k++){
			for (int i = 0; i < 10; i++){
				for (int j = 0; j < 10; j++){
					data[i][j] = min(data[i][j], data[i][k] + data[k][j]);
				}
			}
		}
		
		/*
		for (int i = 0; i <= N; i++){
			cout << i << " : ";
			for (int j = 0; j <= N; j++){
				cout << data[i][j] << " ";
			}
			puts("");
		}
		*/
		
		// i が答えだと仮定して全部計算
		int ret = 10000000, ret_num = 10000000, sum;
		for (int i = 0; i <= N; i++){
			sum = 0;
			for (int j = 0; j <= N; j++){
				sum += data[i][j];
			}
			// cout << sum << endl;
			if (sum < ret_num){
				ret_num = sum;
				ret = i;
			}
		}
		
		cout << ret << " " << ret_num << endl;
	}
	
	return 0;
}