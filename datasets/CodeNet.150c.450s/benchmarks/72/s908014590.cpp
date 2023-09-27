#include <iostream>
#include <stdio.h>
using namespace std;
  
int main()
{
	char cha;
	int e;
	while(1) {
		scanf("%c", &cha);
		e = (int)cha;
		if ((e >= 0x61)&&(e <= 0x7a)) {
			e -= 32;
			printf("%c", e);
		}
		else if ((e >= 0x41)&&(e <= 0x5a)) {
			e += 32;
			printf("%c", e);
		}
		else
			printf("%c", e);
		if(cha=='\n') break;
	}
	return 0;

}