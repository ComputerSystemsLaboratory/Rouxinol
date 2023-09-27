#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <stack>

using namespace std;

int main(){
	int N,table[21][21],row,col,m,div;
	char dist[2];
	bool FLG;

	while(true){
		scanf("%d",&N);
		if(N == 0)break;

		for(int i=0; i < 21; i++){
			for(int k = 0; k < 21; k++){
				table[i][k] = 0;
			}
		}

		for(int i=0; i < N; i++){
			scanf("%d %d",&col,&row);
			table[row][col] = 1;
		}

		row = 10,col = 10;

		scanf("%d",&m);

		for(int i=0; i < m; i++){
			scanf("%s %d",dist,&div);
			switch(dist[0]){
			case 'N':
				for(int k = row;  k <= row+div; k++){
					table[k][col] = 0;
				}
				row += div;
				break;
			case 'S':
				for(int k = row;  k >= row-div; k--){
					table[k][col] = 0;
				}
				row -= div;
				break;
			case 'E':
				for(int k = col; k <= col+div; k++){
					table[row][k] = 0;
				}
				col += div;
				break;
			case 'W':
				for(int k = col; k >= col-div; k--){
					table[row][k] = 0;
				}
				col -= div;
				break;
			}
		}

		FLG = true;

		for(int i=0; i < 21; i++){
			for(int k=0; k < 21; k++){
				if(table[i][k] == 1){
					FLG = false;
					break;
				}
			}
			if(!FLG)break;
		}

		if(FLG)printf("Yes\n");
		else{
			printf("No\n");
		}

	}


    return 0;
}