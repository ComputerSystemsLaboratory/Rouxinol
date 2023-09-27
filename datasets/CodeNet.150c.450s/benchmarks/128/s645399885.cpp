#include <stdio.h>
#include <string.h>

int main(void){
	char buff[128];
	char *p;
	scanf("%s",buff);
	p=buff;
	p=p+strlen(buff);
	while(p!=buff){
		putchar(*(--p));
	}
	putchar('\n');
	return 0;
}