#include <stdio.h>

//????????£?¨?--------------------------- 
int baisu(int n);   //3????????°
int three(int n);   //3??????
//------------------------------------
int main(void)
{
	int n;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		if((baisu(i) == 1) || (three(i) == 1)) {
			printf(" %d", i);
		}
	}
	printf("\n");

	return 0;
}

//--------------------------------------------//3????????°
int baisu(int n)
{
	if ( n % 3 == 0 ){
		return 1;
	}
	else return -1;
}
//--------------------------------------------//3??????
int three(int n)
{
	while(n > 0){
		if((n % 10) == 3){
			return 1;
		}
		n /= 10;
	}
	return -1;
}