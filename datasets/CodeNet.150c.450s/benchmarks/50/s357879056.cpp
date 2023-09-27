#include <stdio.h>

int main(void) {
	int m,c = 0;
		while (scanf("%d",&m) , m != 0){
			c = 0;
			m = 1000 - m;
			while(m >= 500 ){
				m = m - 500 ;
				c++;
			}
			while(m >= 100 ){
				m = m - 100 ;
				c++;
			}
			while(m >= 50 ){
				m = m - 50 ;
				c++;
			}
			while(m >= 10 ){
				m = m - 10 ;
				c++;
			}
			while(m >= 5 ){
				m = m - 5 ;
				c++;
			}
			while(m){
				m--;
				c++;
			}
			printf ("%d\n",c);
		}
	return 0;
}