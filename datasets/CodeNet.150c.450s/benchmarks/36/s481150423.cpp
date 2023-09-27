#include <stdio.h>

int f(int x){
	return (x*x);
}

int main(){
	int d,s;

	while( scanf("%d", &d) != EOF ){
		s = 0;
		for(int i=1 ; (d*i)<=(600-d) ; i++){
			s += f(d*i)*d;
		}
		printf("%d\n", s);
	}

	return 0;
}