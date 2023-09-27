#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>
#include <algorithm>

int main(){
	int a[20], L, tmp[10], i, out[2][20], j;
	char str[10], max[10];
	scanf("%d %d", &a[0], &L);
	while( a[0] + L ){
		for(int k=0; k<20; k++){
			memset(str, '\0', sizeof(str));
			memset(max, '\0', sizeof(max));
			sprintf( str, "%d\0", a[k]);
			for( i=strlen(str); i < L; i++ )
				str[i] = '0';
			str[i] = '\0';
			
			std::sort( str, str + L );
			
			for(i=0; i<L; i++)
				max[i] = str[L-i-1];
			out[0][k] = atoi( max );
			out[1][k] = atoi( str );
			
			a[k+1] = out[0][k] - out[1][k];
			
			bool check=false;
			for( i=0; i<=k; i++ )
				if( a[i] == a[k+1] ){
					j = i;
					check = true;
					break;
				}
			if( check ){
				printf("%d %d %d\n", j, a[k+1], k+1-j );
				break;
			}
			
		}
		scanf("%d %d", &a[0], &L);
	}
}