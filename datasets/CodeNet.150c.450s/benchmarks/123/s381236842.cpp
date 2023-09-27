#include<stdio.h>
#include<math.h>

#define P 10000
#define UNDEFINED -1

int CheckPrime(int v);	//v????´???°??????1????????????
int GetPrime(int n);	//n??????????´???°????????????
int PRIME[P];			//?´???°?????????

int main(){
	int v = 0;
	int N = 0;
	scanf("%d", &N);
	int num = 0;

	for( int i = 0; i < P; i++ ){
		PRIME[i] = UNDEFINED;
	}

	for( int i = 0; i < N; i++ ){
		scanf("%d", &v);
		num += CheckPrime(v);
	}

	printf("%d\n", num);

	return 0;
}

int CheckPrime(int v){
	for( int i = 0; i < P; i++ ){
		if( PRIME[i] == UNDEFINED ){
			PRIME[i] = GetPrime(i);
		}
		if( v == PRIME[i] ){
			return 1;
		}
		if( v % PRIME[i] == 0){
			return 0;
		}
		if( sqrt(v) + 1 < PRIME[i] ){
			return 1;
		}
	}
	return 1;
}

int GetPrime(int n){
	if( n > P ){
		printf("E\n");
	}
	if( n == 0 ){
		PRIME[0] = 2;
		return 2;
	}
	if( n == 1 ){
		PRIME[1] = 3;
		return 3;
	}
	if( PRIME[n-1] == UNDEFINED ){
		PRIME[n-1] = GetPrime(n-1);
	}

	int v = PRIME[n-1] + 2;

	for( int i = 0; i < n; i++){
		if( v % PRIME[i] == 0 ){
			i = 0;
			v += 2;
		}
		if( sqrt(v) + 1 < PRIME[i] ){
			break;
		}
	}
	PRIME[n] = v;
	return v;
}