#include <iostream>
#include <cstdio>
#include<cctype>
#include<cstring>
using namespace std;

int main()
{
	char str[1001];
	
	while (1) {
		scanf("%s",str,1001);
		int sum = 0;
		if (strcmp(str,"0")==0) {
			break;
		}
		else {
			for (int i = 0; i < strlen(str); i++) {
				sum += (str[i] - '0');
			}
		}
		printf("%d\n", sum);

	}
	return 0;
}