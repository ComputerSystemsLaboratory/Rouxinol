#include<stdio.h>

char *str[7] = {"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};
int tuki[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

int main(){
	int a,b;
	int i,d;
	
	while( scanf("%d%d",&a,&b) ){
		if( a == 0 )break;
		d = 0;
		
		for( i = 0;i < a;i++ ){
			d += tuki[i];
		}
		d += b-1;
		
		printf("%s\n",str[ d%7 ] );
	}
	return 0;
}