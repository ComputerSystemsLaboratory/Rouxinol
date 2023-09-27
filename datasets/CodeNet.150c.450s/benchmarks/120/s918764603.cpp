#include <cstdio>
#include <algorithm>
using namespace std;

int r, c;
int a[10000][10];
int b[10000][10];
int d[10000];
int t;
int ans;

int main(){
	while(1){
		scanf("%d %d", &r, &c);
		if(r == 0 && c == 0) break;
		ans = 0;
		for(int i=0; i<r; i++)
			for(int j=0; j<c; j++)
				scanf("%d", &a[j][i]);
		
		for(int i=0; i<1<<r; i++){
			
	//		printf("i=%d\n", i);

			for(int j=0; j<c; j++) d[j] = 0;
			t = 0;

			for(int j=0; j<r; j++){
				if((i>>j&1) == 1) for(int k=0; k<c; k++) b[k][j] = a[k][j];
				else for(int k=0; k<c; k++) b[k][j] = 1 - a[k][j];

	/*			for(int n=0; n<c; n++){
					printf("%d\t", b[n][j]);
				}
				printf("\n");
	*/
			}

			for(int i=0; i<r; i++)
				for(int j=0; j<c; j++)
					d[j] += b[j][i];
	/*
			for(int i=0; i<c; i++) printf("%d\t", d[i]);
			printf("\n");
	*/
			for(int i=0; i<c; i++)
				t += max(d[i], r-d[i]);
			ans = max(ans, t);
		}

		printf("%d\n", ans);
	}
	return 0;
}