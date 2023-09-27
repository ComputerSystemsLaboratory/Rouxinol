#include <stdio.h>
int main()
{
	int n,c[4][13]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int rank;
		char design;
		scanf("%*c%c%*c%d",&design,&rank);
		switch(design){
			case 'S':
				c[0][rank-1]=1;
				break;
			case 'H':
				c[1][rank-1]=1;
				break;
			case 'C':
				c[2][rank-1]=1;
				break;
			case 'D':
				c[3][rank-1]=1;
				break;
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<13;j++){
			if(c[i][j]==0){
				switch(i){
					case 0:
						printf("S %d\n",j+1);
						break;
					case 1:
						printf("H %d\n",j+1);
						break;
					case 2:
						printf("C %d\n",j+1);
						break;
					case 3:
						printf("D %d\n",j+1);
						break;
				}
			}
		}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
	}
	return 0;
}