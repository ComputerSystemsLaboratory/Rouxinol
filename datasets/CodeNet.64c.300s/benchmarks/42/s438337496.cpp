#include <cstdio>

int main(){
	int n, m;
	bool a[21][21];
	while(scanf("%d", &n),n){
		int px = 10, py = 10;
		for(int i = 0; i < 21; i++){
			for(int j = 0; j < 21; j++){
				a[i][j] = false;
			}
		}
		for(int i = 0; i < n; i++){
			int x, y;
			scanf("%d%d", &x, &y);
			a[x][y] = true;
		}
		scanf("%d", &m);
		for(int i = 0; i < m; i++){
			char d; int x;
			scanf(" %c%d", &d, &x);
			if(d == 'E'){
				for(int j = 0; j <= x; j++) a[px+j][py] = false;
				px += x;
			} else if(d == 'N'){
				for(int j = 0; j <= x; j++) a[px][py+j] = false;
				py += x;
			} else if(d == 'W'){
				for(int j = 0; j <= x; j++) a[px-j][py] = false;
				px -= x;
			} else{
				for(int j = 0; j <= x; j++) a[px][py-j] = false;
				py -= x;
			}
		}
		bool ok = true;
		for(int i = 0; i < 21; i++){
			for(int j = 0; j < 21; j++){
				if(a[i][j]) ok = false;
			}
		}
		if(ok) printf("Yes\n");
		else printf("No\n");
	}
}