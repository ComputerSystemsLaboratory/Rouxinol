#include <stdio.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

	int a,b,table[17][17],row,col,n;

	while(true){
		scanf("%d %d",&a,&b);
		if(a ==b && b == 0)break;

		for(int i=0; i <= 16; i++){
			for(int k=0; k <= 16; k++)table[i][k] = 0;
		}

		table[1][1] = 1;

		scanf("%d",&n);

		for(int i=0; i < n; i++){
			scanf("%d %d",&col,&row);
			table[row][col] = -1;
		}

		for(int i = 1; i <= b; i++){
			for(int k=1; k<= a; k++){
				if(table[i][k] != -1){
					if(table[i][k-1] != -1)table[i][k] += table[i][k-1];
					if(table[i-1][k] != -1)table[i][k] += table[i-1][k];
				}
			}
		}

		printf("%d\n",table[b][a]);
	}

    return 0;
}