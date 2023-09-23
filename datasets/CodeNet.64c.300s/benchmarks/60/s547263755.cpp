#include <cstdio>
using namespace std;

int main(){
	while(1){
		int a, b;
		scanf("%d %d", &a, &b);
		if(a==0 && b==0) break;
		int n;
		scanf("%d", &n);
		int c[n][2];
		for(int i=0; i<n; i++){
			scanf("%d %d", &c[i][0], &c[i][1]);
		}
		int map[a][b];
		for(int i=0; i<a; i++){
			for(int j=0; j<b; j++){
				map[i][j] = 0;
			}
		}
		bool f = false;
		for(int i=0; i<a; i++){
			for(int j=0; j<n; j++){
				if(c[j][0]-1 == i && c[j][1]-1 == 0) f = true;
			}
			if(f){
				break;
			}else{
				map[i][0] = 1;
			}
		}
		f = false;
		for(int i=0; i<b; i++){
			bool f = false;
			for(int j=0; j<n; j++){
				if(c[j][0]-1 == 0 && c[j][1]-1 == i) f = true;
			}
			if(f){
				break;
			}else{
				map[0][i] = 1;
			}
		}
		for(int i=0; i<a; i++){
			for(int j=0; j<b; j++){
				if(i!=0 && j!=0){
					f = false;
					for(int k=0; k<n; k++){
						if(c[k][0]-1 == i && c[k][1]-1 == j) f = true;
					}
					if(f){
						map[i][j] = 0;
					}else{
						map[i][j] = map[i-1][j] + map[i][j-1];
					}
				}
//			printf("%d %d %d\n", i, j, map[i][j]);
			}
		}
		printf("%d\n", map[a-1][b-1]);
	}

	return 0;
}