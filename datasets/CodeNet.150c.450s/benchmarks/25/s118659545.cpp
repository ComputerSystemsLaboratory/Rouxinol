#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

#define MAX 26

int main(void)
{
	char c;
	int i;
	int cnt[MAX] = {0};

	while ((c = getchar()) != EOF) {
		if ((c>='A') && (c<='Z')) {
			c += ' ';
		}
		cnt[c-'a']++;
	}
	
	for (i=0; i<MAX; i++) {
		printf("%c : %d\n", 'a'+i, cnt[i]);
	}
	return 0;
}


