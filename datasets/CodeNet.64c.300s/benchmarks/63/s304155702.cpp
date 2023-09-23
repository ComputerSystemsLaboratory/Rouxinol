#include <stdio.h>

int main(void) {
	int buf,i,c;
	long int a,b,gcd,lcm;
	
	while(scanf("%ld%ld",&a,&b) != EOF){
		if(b > a){buf = a;a = b;b = buf;}
		for(i = 1;;i++){
			if(((int)(a/i)) == a/(float)i && b%(a/i) == 0) {gcd = a/i;break;}
		}
		for(i = 1; ;i++){
			if((a*i)%b == 0) {lcm = a*i;break;}
		}
		
		printf("%ld %ld\n",gcd,lcm);
	}
	
	return 0;
}