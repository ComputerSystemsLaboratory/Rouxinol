#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;
#define Abs(x) ((x>=0)?x:-x)


#define FOR(i,init,n) for(int i = init; i < n ;i++)
#define REP(i,n)  FOR(i,0,n)

int prime_judge(int candidate){
	int i,limit;
	if (candidate >= 2){
		limit = (int)sqrt((double)candidate);

		for (i = limit; i > 1; i--){
			if (candidate%i == 0){
				break;
			}
		}

		if (i == 1){
			return(1);
		}
		else{
			return(0);
		}
	}
	else{
		return(0);
	}
}

int main()
{
	
	while (1){
		int a, d, n;
		scanf("%d", &a);
		scanf("%d", &d);
		scanf("%d", &n);
		if (a == 0 && d == 0 && n == 0){
			break;
		}
		int candidate, prime,count;
		count = 0;
		candidate = a;
		while (count < n){
			prime = 0;
			prime = prime_judge(candidate);
			if (prime == 1){
				count++;
			}
			if (count == n){
				break;
			}
			candidate += d;
		}

		printf("%d\n", candidate);
	}
	return 0;
}