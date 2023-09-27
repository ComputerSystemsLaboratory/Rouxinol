#include <cstdio>

int main(){
	while(true){
		int N;
		scanf("%d", &N);
		if(N == 0){ break; }
		bool field[21][21] = { { false } };
		for(int i = 0; i < N; i++){
			int x, y;
			scanf("%d%d", &x, &y);
			field[x][y] = true;
		}
		int M, rx = 10, ry = 10, count = 0;
		scanf("%d", &M);
		for(int i = 0; i < M; i++){
			char d[2] = "";
			int l;
			scanf("%1s%d", d, &l);
			for(int j = 0; j < l; j++){
				switch(d[0]){
					case 'N': ry++; break;
					case 'E': rx++; break;
					case 'W': rx--; break;
					case 'S': ry--; break;
				}
				if(field[rx][ry]){
					count++;
					field[rx][ry] = false;
				}
			}
		}
		puts((count == N) ? "Yes" : "No");
	}
	return 0;
}