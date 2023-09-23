#include <stdio.h>


int main(){

	long int list = 0;
	int buf,i;
	for (i = 0; 28 > i; i++){ scanf("%d", &buf); list |= 1 << buf-1; }
	for (i = 0; 30 > i; i++){ if (! (list &1<<i)) printf("%d\n",i+1); }
}