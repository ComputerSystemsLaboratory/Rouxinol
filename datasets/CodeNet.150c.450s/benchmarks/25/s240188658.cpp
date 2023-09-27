#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
	char str;
	int count[26] = { 0 }, i = 0, k;
	str = getchar();
	while (str != EOF){
		if ('a' <= str && str <= 'z'){ k = str - 'a'; count[k]++; }
		if ('A' <= str && str <= 'Z'){ k = str - 'A'; count[k]++; }
		str = getchar();
	}
	for (i=0;i<26;i++){
		printf("%c : %d\n", 'a' + i, count[i]);
	}
	return 0;
}