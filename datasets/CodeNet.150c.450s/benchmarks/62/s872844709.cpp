#include <stdio.h>

int main(void)
{
	int a, b, c, min, mid, max;
	scanf("%d %d %d", &a, &b, &c);
	if(a < b){
		if(b < c){
			min = a;
			mid = b;
			max = c;
		}else{
			max = b;
			if(a < c){
				min = a;
				mid = c;
			}else{
				min = c;
				mid = a;
			}
		}
	}else{
		if(c < b){
			min = c;
			mid = b;
			max = a;
		}else{
			min = b;
			if(a < c){
				mid = a;
				max = c;
			}else{
				mid = c;
				max = a;
			}
		}
	}
	printf("%d %d %d\n", min, mid, max);
	return 0;
}