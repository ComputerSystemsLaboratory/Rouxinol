#include <stdio.h>

void sort(int x[]);
	
int main(void)
{
	int i;
	int num[10];
	
	for(i=0; i<10; i++){
		scanf("%d", &num[i]);
	}
	
	sort(num);
	/*
	for(i=0; i<10; i++){
		printf("%d\n", num[i]);
	}	
*/
	return 0;
}

void sort(int x[])
{
	int i;
	int temp = 0;
	int flag=0;
/*	
	for(i=0; i<10; i++){
		printf("%d\n", x[i]);
	}	
	printf("\n");
*/	
	do{
		
		flag = 0;
		for(i=0;i<9;i++){
			if(x[i]>x[i+1]){
				temp = x[i+1];
				x[i+1] = x[i];
				x[i] = temp;
				flag = 1;
			}
		}
/*	
		for(i=0; i<10; i++){
			printf("%d\n", x[i]);
		}	
		printf("\n");
*/

	}while(flag==1);

	printf("%d\n", x[9]);
	printf("%d\n", x[8]);
	printf("%d\n", x[7]);

}