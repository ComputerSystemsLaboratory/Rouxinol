#include <cstdio>

int face[6];
int times,a,b;


int main(){
	
	for(int i=0; i<6; ++i){
		scanf("%d", &face[i]);
	}
	
	int check[6][4] = {
		{face[1],face[2],face[4],face[3]},
		{face[5],face[2],face[0],face[3]},
		{face[5],face[4],face[0],face[1]},
		{face[5],face[1],face[0],face[4]},
		{face[5],face[3],face[0],face[2]},
		{face[4],face[2],face[1],face[3]}
	};
	
	scanf("%d", &times);
	
	for(int i=0; i<times; ++i){
		scanf("%d %d", &a, &b);
		for(int j=0; j<6; ++j){
			if(a == face[j]){
				for(int k=0; k<4; ++k){
					if(b == check[j][k] && k!=3){
						printf("%d\n", check[j][k+1]);
					}else if(k == 3 && b == check[j][3]){
						printf("%d\n", check[j][0]);
					}
				}
			}
		}
	}	
}
