#include <stdio.h>
#include<math.h>
using namespace std;



int main(){
	int n,s,check[10][46];

	for(int i=0; i < 10; i++){
		for(int k=0; k < 46; k++){
			check[i][k] = 0;
		}
	}

	//1?????¨9???
	for(int i=0;i<=9;i++){
		check[1][i]++;
		check[9][45-i]++;
	}

	//2?????¨8???
	for(int i=0;i<=9;i++){
		for(int k=0;k<=9;k++){
			if(i < k){
				check[2][i+k]++;
				check[8][45-(i+k)]++;
			}
		}
	}

	//3?????¨7???
	for(int i=0;i<=9;i++){
		for(int k=0;k<=9;k++){
			for(int p=0;p<=9;p++){
				if(i < k && k < p){
					check[3][i+k+p]++;
					check[7][45-(i+k+p)]++;
				}
			}
		}
	}

	//4?????¨6???
	for(int i=0;i<=9;i++){
		for(int k=0;k<=9;k++){
			for(int p=0;p<=9;p++){
				for(int n=0;n<=9;n++){
					if(i < k && k <  p && p < n){
						check[4][i+k+p+n]++;
						check[6][45-(i+k+p+n)]++;
					}
				}
			}
		}
	}

	//5???
	for(int a=0;a<=9;a++){
		for(int b=0;b <= 9; b++){
			for(int c=0;c<=9;c++){
				for(int d=0;d<=9;d++){
					for(int e=0;e<=9;e++){
						if(a < b && b < c && c < d && d < e){
							check[5][a+b+c+d+e]++;
						}
					}
				}
			}
		}
	}


	while(true){
		scanf("%d %d",&n,&s);
		if(n == 0 && s == 0)break;
		if(s >= 46)printf("0\n");
		else{
			printf("%d\n",check[n][s]);
		}
	}
    return 0;
}