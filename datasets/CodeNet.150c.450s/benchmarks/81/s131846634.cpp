#include <cstdio>
#include <algorithm>
using namespace std;

const int INF = 100100100;

int main(){
	while(1){
		int n;
		scanf("%d", &n);
		if(n == 0) break;

		int d[10][10];
		for(int i=0; i<10; i++)
			for(int j=0; j<10; j++){
				if(i == j) d[i][j] = 0;
				else d[i][j] = INF;
			}
		for(int i=0; i<n; i++){
			int a, b, c;
			scanf("%d %d %d", &a, &b, &c);
			d[a][b] = c;
			d[b][a] = c;
		}

		for(int k=0; k<10; k++){
			for(int i=0; i<10; i++){
				for(int j=0; j<10; j++){
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
				}
			}
		}

		int s[10] = {};
		for(int i=0; i<10; i++){
			for(int j=0; j<10; j++){
				if(d[i][j] != INF){
					s[i] += d[i][j];
				}
			}
		}
		
		int num, ans = INF;
		for(int i=0; i<10; i++){
			if(s[i] != 0 && s[i] < ans){
				num = i;
				ans = s[i];
			}
		}
		printf("%d %d\n", num, ans);
	}
	return 0;
}