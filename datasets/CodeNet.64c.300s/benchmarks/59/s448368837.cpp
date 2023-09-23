#include <stdio.h>

int sqrt(unsigned int x){
  int a = 0, c = 0, y = 0, i = 0, t = x;
  while(t >>= 1){
    ++i;
  }
  for(i += i & 1; i >= 0; i -= 2){
    c = (y << 1 | 1) <= x >> i;
    a = a << 1 | c;
    y = y << 1 | c;
    x -= c * y << i;
    /* if(c){
      x -= y << i;
    } */
    y += c;
  }
  return a;
}


int isPrime(int a) {

	int j;

	if (a == 2) {
		return 1;
	}

	if (a < 2 || a % 2 == 0) {
		return 0;
	}


	for (j = 3; j <= sqrt(a); j += 2) {
		if (a % j == 0) {
			return 0;
		}
	}

	return 1;
}

int main() {

	int num;
	int p_count = 0;
	int n, i;

	scanf("%d", &num);
	
	for (i = 0; i < num; i++) {

		scanf("%d", &n);

		if (isPrime(n)) {
			p_count++;
		}

	}


	printf("%d\n", p_count);

	return 0;
}