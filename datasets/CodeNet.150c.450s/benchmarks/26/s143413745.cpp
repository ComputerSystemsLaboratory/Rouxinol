#include <stdio.h>


int main(void)
{
	int j,k;
	char *s;
	
	fscanf(stdin, "%d %d", &j,&k);
	
	if (j == k)       s = "==";
	else if (j < k)   s = "<";
	else              s = ">";
	
	fprintf(stdout, "a %s b", s);
	fputc('\n', stdout);
	
}