#include <stdio.h>
/********
*	??????????????¨????????????
*********/

/*********??¢?????´?????????
*	(1)????¬????????????¨????¬??????????????????????
*	(2)????¬?????????????????¬????????????¨?????????
*	(3)
*********/

int main(void)
{
	int n, m;			//?????°n????????°m
	int a, b, c;
	int i, j;
	int gyouretu_a[101][101]={{0}}, gyouretu_b[101]={0}, gyouretu_c[101]={0};
	
	scanf("%d %d\n", &n, &m);

	for(i=1; i<= n; i++){		//A?????\???
		for(j=1; j<= m; j++){
			scanf("%d", &a);
			gyouretu_a[i][j] = a;

			if(j < (m-1)){
				scanf(" ");
			}else if(j ==m){
				scanf("\n");
			}else{
			//??????????????\??????
			}
		}
	}
	
	for(i=1; i<= m; i++){		//b?????\???
			scanf("%d\n", &b);
			gyouretu_b[i] = b;
	}

	for(i=1; i <= n; i++){
		for(j=1; j<= m; j++){
			gyouretu_c[i] += (gyouretu_a[i][j])* (gyouretu_b[j]);
		}
	}
	
	
	for(j=1; j <= n; j++){		//???????????????
		c = gyouretu_c[j];
		printf("%d\n", c);
	}
	
    return 0;
}