#include <stdio.h>

int main(void)
{
	int kai1[3][10],kai2[3][10],kai3[3][10],kai4[3][10];
	int a,b,c,d,e,f,g;
	
	for(b = 0;b < 3;++b){
		for(g = 0;g < 10;++g){
			kai1[b][g] = 0;
		}
	}
	for(b = 0;b < 3;++b){
		for(g = 0;g < 10;++g){
			kai2[b][g] = 0;
		}
	}
	for(b = 0;b < 3;++b){
		for(g = 0;g < 10;++g){
			kai3[b][g] = 0;
		}
	}
	for(b = 0;b < 3;++b){
		for(g = 0;g < 10;++g){
			kai4[b][g] = 0;
		}
	}


	
	scanf("%d",&a);
	
	for(b = 0;b < a;++b){
		scanf("%d %d %d %d",&c,&d,&e,&f);
		if(c == 1 && (d <= 3 && d >= 1) && (e <= 10 && e >= 1) && f <= 9){
			kai1[d-1][e-1] += f;
		}
		if(c == 2 && (d <= 3 && d >= 1) && (e <= 10 && e >= 1) && f <= 9){
			kai2[d-1][e-1] += f;
		}
		if(c == 3 && (d <= 3 && d >= 1) && (e <= 10 && e >= 1) && f <= 9){
			kai3[d-1][e-1] += f;
		}
		if(c == 4 && (d <= 3 && d >= 1) && (e <= 10 && e >= 1) && f <= 9){
			kai4[d-1][e-1] += f;
		}
	}
	
	for(b = 0;b < 3;++b){
		for(g = 0;g < 10;++g){
			if(kai1[b][g] >= 0){
				printf(" %d",kai1[b][g]);
			}
			else if(kai1[b][g] < 0){
				kai1[b][g] = 0;
				printf(" %d",kai1[b][g]);
			}
		}
		printf("\n");
	}
	
	printf("####################\n");
	
	for(b = 0;b < 3;++b){
		for(g = 0;g < 10;++g){
			if(kai2[b][g] >= 0){
				printf(" %d",kai2[b][g]);
			}
			else if(kai2[b][g] < 0){
				kai1[b][g] = 0;
				printf(" %d",kai2[b][g]);
			}
		}
		printf("\n");
	}
	
	
	printf("####################\n");
	
	for(b = 0;b < 3;++b){
		for(g = 0;g < 10;++g){
			if(kai3[b][g] >= 0){
				printf(" %d",kai3[b][g]);
			}
			else if(kai3[b][g] < 0){
				kai3[b][g] = 0;
				printf(" %d",kai3[b][g]);
			}
		}
		printf("\n");
	}
	
	
	printf("####################\n");
	
	for(b = 0;b < 3;++b){
		for(g = 0;g < 10;++g){
			if(kai4[b][g] >= 0){
				printf(" %d",kai4[b][g]);
			}
			else if(kai1[b][g] < 0){
				kai4[b][g] = 0;
				printf(" %d",kai4[b][g]);
			}
		}
		printf("\n");
	}
	
	
	return(0);
}