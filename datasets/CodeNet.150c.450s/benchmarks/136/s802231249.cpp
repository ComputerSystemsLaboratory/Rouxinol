#include<cstdio>

int main(){
	long long a,b,g,l,t;
	while(scanf("%lld %lld", &a, &b) + 1){
		if(a > b){
			t = a;
			a = b;
			b = t;
		}

		if(b % a){
			t = a / 2;
			l = 1;
			for(int i = 2; i <= t; i++){
				if(!(a % i)){
					g = a / i;
					if(!(b % g)){
						printf("%lld %lld\n", g, a * b / g);
						i += t;
						l = 0;
					}
				}
			}
			if(l){
				printf("1 %lld\n", a * b);
			}

		}else{
			printf("%lld %lld\n", a, b);
		}
	}
	return 0;
}