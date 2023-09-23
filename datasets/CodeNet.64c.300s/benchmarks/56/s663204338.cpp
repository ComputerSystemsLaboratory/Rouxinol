#include <stdio.h>

int main()
{
	int n, Y, M, D;
	
	int year = 20*5 + 19*5, year3 = 20*10;
	int yearsum = 999*year + (int)(1000/3)*5;
	
	scanf("%d", &n);
	for( int i=0; i<n; i++ ){
		scanf("%d %d %d", &Y, &M, &D);
		Y--;M--;D--;
		printf( "%d\n", yearsum - ( Y*year + (int)(Y/3)*5 + M*19 + D + (((Y+1)%3)?(int)((M+1)/2):M) ) );
	}
}