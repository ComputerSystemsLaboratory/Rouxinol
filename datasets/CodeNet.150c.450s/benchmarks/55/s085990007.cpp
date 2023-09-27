#include <iostream>
#include <stdio.h>
using namespace std;
   
int main()
{
	char nc;
	int ni=0;
		scanf("%c", &nc);
		while(1) {
			ni += ((int)nc)-48;
			if(nc=='\n'){
				ni += 38;
				printf("%d\n", ni);
				ni = 0;
				scanf("%c", &nc);
				if(nc=='0')
					break;
			}
			else
				scanf("%c", &nc);
		}
	return 0;
}