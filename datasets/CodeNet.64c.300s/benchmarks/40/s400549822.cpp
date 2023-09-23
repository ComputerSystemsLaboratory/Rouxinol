#include <cstdio>
#include <cctype>
using namespace std;
int main(){
	char str;
	refrain:
	scanf("%c",&str);
	if(str=='\n'){
		printf("\n");
		return 0;
	}
	if(islower(str)) str=toupper(str);
	else if(isupper(str)) str=tolower(str);
	printf("%c",str);
	goto refrain;
}