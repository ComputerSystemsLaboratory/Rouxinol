#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main(){
	char str[20];
	scanf("%s",str);
	reverse(str,str + strlen(str));
	printf("%s\n",str);
	return 0;
}