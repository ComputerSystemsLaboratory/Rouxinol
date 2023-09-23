// icpc.cpp : R\[ AvP[VÌGg |Cgðè`µÜ·B
//


#include <iostream>
#include <stdio.h>
struct P{
	int x, y;
};

int main(int argc, char* argv[])
{
	int N;
	
	while(1){
		scanf("%d", &N);
		if(N == 0){
			break;
		}
		P dia[20];
		for(int i = 0; i < N; i++){
			scanf("%d %d", &dia[i].x, &dia[i].y);
			if(dia[i].x == 10 && dia[i].y == 10){
				dia[i].x = dia[i].y = -1;
			}
		}
		int x = 10, y = 10;
		int M;
		scanf("%d", &M);
		for(int i = 0; i < M; i++){
			char ch;
			int dx, dy;
			scanf(" %c", &ch);
			switch(ch){
			case 'N': dx = 0; dy = 1; break;
			case 'E': dx = 1; dy = 0; break;
			case 'S': dx = 0; dy = -1; break;
			case 'W': dx = -1; dy = 0; break;
			}
			int d = 0;
			scanf("%d", &d);
			for(int j = 0; j < d; j++){
				x += dx; y += dy;
				for(int k = 0; k < N; k++){
					if(dia[k].x == x && dia[k].y == y){
						dia[k].x = dia[k].y = -1;
						break;
					}
				}
			}
		}
		bool f = false;
		for(int k = 0; k < N; k++){
			if(dia[k].x != -1 && dia[k].y != -1){
				f = true;
				break;
			}
		}
		printf(f ? "No\n" : "Yes\n");


	}
	return 0;
}