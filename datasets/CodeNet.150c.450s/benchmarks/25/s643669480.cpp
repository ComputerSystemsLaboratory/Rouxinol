#include <iostream>
#include <stdio.h>
using namespace std;
   
int main()
{
	char a;
	int as;
	int c[26];
	for(int i=0; i<26; i++)
		c[i] = 0;
	scanf("%c", &a);
	while(1) {
		as = (int)a;
		if ((as >= 0x41)&&(as <=0x5a))
			c[as-0x41] += 1;
		if ((as >= 0x61)&&(as <=0x7a))
			c[as-0x61] += 1;
		if (as==0x0a){
			scanf("%c", &a);
			as = (int)a;
			if(((as<0x41)||(as>0x51))&&((as<0x61)||(as>0x7a)))
				break;
		}
		else
			scanf("%c", &a);
	}
	for(int i=0; i<26; i++)
		printf("%c : %d\n",0x61+i,c[i]);
	return 0;
}