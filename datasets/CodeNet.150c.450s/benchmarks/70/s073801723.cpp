#include<stdio.h>
 
int main(){
	int m, d, h[11], i;
	h[0] = h[2] = h[4] = h[6] = h[7] = h[9] = 31;
	h[3] = h[5] = h[8] = h[10] = 30;
	h[1] = 29;
	while(scanf("%d %d", &m, &d) != 0){
		if(m == 0 || d == 0) break;
		for(i = 0; i < m - 1; i++) d += h[i];
		if(d % 7 == 1) printf("Thursday\n");
		else if(d % 7 == 2) printf("Friday\n");
		else if(d % 7 == 3) printf("Saturday\n");
		else if(d % 7 == 4) printf("Sunday\n");
		else if(d % 7 == 5) printf("Monday\n");
		else if(d % 7 == 6) printf("Tuesday\n");
		else if(d % 7 == 0) printf("Wednesday\n");
	}
	return 0;
}